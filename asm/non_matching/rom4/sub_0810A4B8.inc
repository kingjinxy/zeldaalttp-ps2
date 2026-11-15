	THUMB_FUNC_START sub_0810A4B8
sub_0810A4B8: @ 0x0810A4B8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _0810A4F8  @ =gRam
	ldr r1, _0810A4FC  @ =0x000010C2
	add r0, r4, r1
	add r3, r2, r0
	ldrb r1, [r3]
	mov r5, #127
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #26
	bne _0810A4F2
	mov r0, #0
	strb r0, [r3]
	ldr r1, _0810A500  @ =0x00000F52
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #19
	strb r1, [r0]
	ldr r1, _0810A504  @ =0x00000FC2
	add r0, r4, r1
	add r0, r2, r0
	strb r5, [r0]
	add r1, r1, #48
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #215
	strb r1, [r0]
_0810A4F2:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810A4F8:
	.4byte gRam
_0810A4FC:
	.4byte 0x000010C2
_0810A500:
	.4byte 0x00000F52
_0810A504:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_0810A4B8

