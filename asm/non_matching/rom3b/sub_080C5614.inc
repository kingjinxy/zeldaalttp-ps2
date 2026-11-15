	THUMB_FUNC_START sub_080C5614
sub_080C5614: @ 0x080C5614
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r7, #0
	ldr r1, _080C5670  @ =gRam
	ldr r2, _080C5674  @ =0x000015F7
	add r0, r1, r2
	ldrb r0, [r0]
	add r6, r1, #0
	cmp r0, #0
	bne _080C5642
	ldr r1, _080C5678  @ =0x000009B2
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C5642
	ldr r2, _080C567C  @ =0x00000D94
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
_080C5642:
	add r5, r6, #0
	ldr r1, _080C5680  @ =0x00001610
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080C56EE
	ldr r2, _080C5684  @ =0x00000FE2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C5660
	mov r0, #12
	bl sub_080CF3A0
_080C5660:
	ldr r1, _080C5688  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C568C
	mov r7, #1
	b _080C56EE
_080C5670:
	.4byte gRam
_080C5674:
	.4byte 0x000015F7
_080C5678:
	.4byte 0x000009B2
_080C567C:
	.4byte 0x00000D94
_080C5680:
	.4byte 0x00001610
_080C5684:
	.4byte 0x00000FE2
_080C5688:
	.4byte 0x00001062
_080C568C:
	ldr r2, _080C56C8  @ =0x00000FF2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r3, [r0]
	ldr r0, _080C56CC  @ =gUnknown_081720E3
	add r2, r3, #0
	sub r2, r2, #216
	add r0, r2, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080C56E8
	ldr r0, _080C56D0  @ =gUnknown_081720D4
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C56E0
	cmp r0, #2
	bne _080C56C0
	cmp r3, #230
	bne _080C56D8
	ldr r1, _080C56D4  @ =0x00001002
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080C56D8
_080C56C0:
	add r0, r4, #0
	bl sub_080C59CC
	b _080C56EE
_080C56C8:
	.4byte 0x00000FF2
_080C56CC:
	.4byte gUnknown_081720E3
_080C56D0:
	.4byte gUnknown_081720D4
_080C56D4:
	.4byte 0x00001002
_080C56D8:
	add r0, r4, #0
	bl sub_080C6240
	b _080C56EE
_080C56E0:
	add r0, r4, #0
	bl sub_080C58F0
	b _080C56EE
_080C56E8:
	add r0, r4, #0
	bl sub_080C56F8
_080C56EE:
	add r0, r7, #0
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C5614

	.byte 0x00
	.byte 0x00
