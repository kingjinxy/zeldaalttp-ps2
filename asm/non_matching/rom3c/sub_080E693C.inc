	THUMB_FUNC_START sub_080E693C
sub_080E693C: @ 0x080E693C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E6A2C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E6A00
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E6A00
	add r0, r4, #0
	bl sub_080C841C
	cmp r0, #0
	bne _080E6A00
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C79F8
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E6990
	ldr r0, _080E6A08  @ =gRam
	ldr r1, _080E6A0C  @ =0x00000FC2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E69B0
_080E6990:
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #32
	ldr r2, _080E6A08  @ =gRam
	ldr r3, _080E6A0C  @ =0x00000FC2
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _080E6A10  @ =0x00000FB2
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #3
	and r1, r1, r0
	strb r1, [r2]
_080E69B0:
	ldr r5, _080E6A08  @ =gRam
	ldr r3, _080E6A14  @ =0x00000F22
	add r1, r5, r3
	add r1, r4, r1
	ldr r2, _080E6A18  @ =gUnknown_08177754
	ldr r0, _080E6A10  @ =0x00000FB2
	add r3, r5, r0
	add r3, r4, r3
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E6A1C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080E6A20  @ =gUnknown_08177756
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E6A24  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #25
	lsl r1, r0, #24
	lsr r2, r1, #24
	ldrb r0, [r3]
	cmp r0, #1
	bls _080E69F4
	lsr r2, r1, #26
_080E69F4:
	ldr r1, _080E6A28  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	and r2, r2, r1
	strb r2, [r0]
_080E6A00:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E6A08:
	.4byte gRam
_080E6A0C:
	.4byte 0x00000FC2
_080E6A10:
	.4byte 0x00000FB2
_080E6A14:
	.4byte 0x00000F22
_080E6A18:
	.4byte gUnknown_08177754
_080E6A1C:
	.4byte 0x00000F12
_080E6A20:
	.4byte gUnknown_08177756
_080E6A24:
	.4byte 0x00001052
_080E6A28:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080E693C

