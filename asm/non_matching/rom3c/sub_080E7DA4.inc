	THUMB_FUNC_START sub_080E7DA4
sub_080E7DA4: @ 0x080E7DA4
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080E7DE8  @ =gRam
	ldr r1, _080E7DEC  @ =0x00000FA2
	add r0, r4, r1
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #9
	bne _080E7DFC
	add r1, r1, #192
	add r0, r4, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080E7DFC
	mov r6, #0
	strb r6, [r1]
	ldr r0, _080E7DF0  @ =0x00000F22
	add r4, r4, r0
	add r4, r5, r4
	mov r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	strb r6, [r4]
	cmp r0, #0
	beq _080E7DF4
	strb r6, [r7]
	b _080E7E70
	.byte 0x00
	.byte 0x00
_080E7DE8:
	.4byte gRam
_080E7DEC:
	.4byte 0x00000FA2
_080E7DF0:
	.4byte 0x00000F22
_080E7DF4:
	add r0, r5, #0
	mov r1, #108
	bl sub_080CF0AC
_080E7DFC:
	ldr r4, _080E7E78  @ =gRam
	ldr r1, _080E7E7C  @ =0x00000F82
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E7E14
	ldr r1, _080E7E80  @ =0x00000D94
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
_080E7E14:
	add r0, r5, #0
	bl sub_080E7E90
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E7E70
	ldr r1, _080E7E84  @ =0x00001122
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080E7E40
	add r0, r5, #0
	bl sub_080C841C
	cmp r0, #0
	bne _080E7E70
_080E7E40:
	ldr r1, _080E7E88  @ =0x00000F52
	add r0, r4, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #1
	bls _080E7E54
	mov r0, sp
	add r1, r5, #0
	bl sub_080C4948
_080E7E54:
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E7E70
	ldr r0, _080E7E8C  @ =gUnknown_081778E0
	ldrb r1, [r4]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r5, #0
	bl _call_via_r1
_080E7E70:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080E7E78:
	.4byte gRam
_080E7E7C:
	.4byte 0x00000F82
_080E7E80:
	.4byte 0x00000D94
_080E7E84:
	.4byte 0x00001122
_080E7E88:
	.4byte 0x00000F52
_080E7E8C:
	.4byte gUnknown_081778E0
	THUMB_FUNC_END sub_080E7DA4

