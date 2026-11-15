	THUMB_FUNC_START sub_080E2E24
sub_080E2E24: @ 0x080E2E24
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r3, #0
	ldr r2, _080E2E88  @ =gRam
	ldr r1, _080E2E8C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080E2EB2
	ldr r5, _080E2E90  @ =0x00000FB2
	add r1, r2, r5
	add r1, r4, r1
	add r5, r5, #208
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E2E94  @ =0x0000097C
	add r0, r2, r1
	ldrb r0, [r0]
	add r0, r0, #64
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #103
	bhi _080E2EA4
	ldr r5, _080E2E98  @ =0x0000097D
	add r0, r2, r5
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #95
	bhi _080E2EA4
	ldr r0, _080E2E9C  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E2EA0  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #24
	strb r1, [r0]
	b _080E2EAE
_080E2E88:
	.4byte gRam
_080E2E8C:
	.4byte 0x00000996
_080E2E90:
	.4byte 0x00000FB2
_080E2E94:
	.4byte 0x0000097C
_080E2E98:
	.4byte 0x0000097D
_080E2E9C:
	.4byte 0x00000F52
_080E2EA0:
	.4byte 0x00000FC2
_080E2EA4:
	add r0, r4, #0
	mov r1, #8
	bl sub_080C35FC
	mov r3, #1
_080E2EAE:
	cmp r3, #0
	beq _080E2EB8
_080E2EB2:
	add r0, r4, #0
	bl sub_080E3440
_080E2EB8:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E2E24

	.byte 0x00
	.byte 0x00
