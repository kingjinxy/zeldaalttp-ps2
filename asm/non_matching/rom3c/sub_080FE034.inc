	THUMB_FUNC_START sub_080FE034
sub_080FE034: @ 0x080FE034
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r5, _080FE09C  @ =gRam
	ldr r1, _080FE0A0  @ =0x00000FC2
	add r0, r5, r1
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080FE056
	ldr r0, _080FE0A4  @ =0x00000F52
	add r1, r5, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FE056:
	mov r2, #0
	ldrb r1, [r3]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _080FE064
	mov r2, #1
_080FE064:
	ldr r1, _080FE0A8  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r0, r4, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FE094
	ldr r1, _080FE0AC  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080FE0B0  @ =0x00001032
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #93
	bl sub_080CF0AC
_080FE094:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FE09C:
	.4byte gRam
_080FE0A0:
	.4byte 0x00000FC2
_080FE0A4:
	.4byte 0x00000F52
_080FE0A8:
	.4byte 0x00000F92
_080FE0AC:
	.4byte 0x00000F62
_080FE0B0:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080FE034

