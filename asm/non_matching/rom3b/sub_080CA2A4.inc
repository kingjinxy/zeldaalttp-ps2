	THUMB_FUNC_START sub_080CA2A4
sub_080CA2A4: @ 0x080CA2A4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C7A48
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _080CA2C0
	ldr r2, _080CA2BC  @ =gRam
	b _080CA2DC
_080CA2BC:
	.4byte gRam
_080CA2C0:
	ldr r2, _080CA2F0  @ =gRam
	ldr r0, _080CA2F4  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080CA2F8  @ =0x000010A2
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080CA2DC:
	ldr r1, _080CA2FC  @ =0x00001042
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	bne _080CA300
	mov r0, #0
	b _080CA31C
_080CA2F0:
	.4byte gRam
_080CA2F4:
	.4byte 0x00000F22
_080CA2F8:
	.4byte 0x000010A2
_080CA2FC:
	.4byte 0x00001042
_080CA300:
	ldr r0, _080CA324  @ =0x00000F12
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080CA328  @ =0x000010A2
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r1]
_080CA31C:
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080CA324:
	.4byte 0x00000F12
_080CA328:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080CA2A4

