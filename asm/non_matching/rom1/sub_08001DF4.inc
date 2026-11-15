	thumb_func_start sub_08001DF4
sub_08001DF4: @ 0x08001DF4
	push {lr}
	push {r1}
	ldr r2, _08002164 @ =0x03000BD0
	ldrh r2, [r2]
	ldr r3, _08002168 @ =0x00000101
	tst r2, r3
	beq _08001E7C
	movs r2, #0x27
	ldrb r2, [r1, r2]
	orrs r2, r2
	bne _08001E7C
	movs r2, #0x26
	ldrb r2, [r1, r2]
	orrs r2, r2
	bne _08001E7C
	movs r2, #0x36
	ldrh r2, [r1, r2]
	orrs r2, r2
	bne _08001E7C
	ldrb r2, [r1, #0x12]
	cmp r2, #4
	beq _08001E7C
	ldrb r2, [r1, #5]
	cmp r2, #3
	beq _08001E7C
	orrs r2, r2
	beq _08001E3A
	ldr r2, [r0, #0x6c]
	ldr r2, [r2, #0x58]
	ldrb r3, [r2, #8]
	cmp r3, #6
	bne _08001E7C
	ldrb r3, [r2, #9]
	cmp r3, #0x38
	bne _08001E7C
_08001E3A:
	ldr r4, _0800216C @ =0x03000840
_08001E3C:
	ldr r1, [r4]
	orrs r1, r1
	beq _08001E7C
	movs r7, #0x50
	ldrh r5, [r0, r7]
	ldrh r6, [r1, r7]
	ands r5, r6
	ldr r6, _08002170 @ =0x0000C000
	ands r5, r6
	beq _08001E74
	push {r2, r3, r4}
	ldr r3, [r0, #0x48]
	ldr r4, [r1, #0x48]
	ldrb r2, [r3, #6]
	ldrb r3, [r4, #6]
	adds r2, r2, r3
	ldr r3, [r0, #0x48]
	ldrb r3, [r3, #7]
	ldrb r4, [r4, #7]
	adds r3, r3, r4
	bl sub_08003634
	pop {r2, r3, r4}
	beq _08001E74
	movs r5, #0x47
	ldrb r5, [r1, r5]
	orrs r5, r5
	beq _08001E82
_08001E74:
	adds r4, #4
	ldr r1, _08002174 @ =0x03000940
	cmp r4, r1
	blo _08001E3C
_08001E7C:
	movs r2, #1
	pop {r1}
	pop {pc}
_08001E82:
	ldrb r3, [r0, #0xa]
	adds r3, #1
	movs r2, #0x47
	strb r3, [r1, r2]
	movs r2, #0x3d
	ldrb r3, [r0, r2]
	movs r2, #0xfc
	orrs r3, r3
	beq _08001EA4
	cmp r3, #0x80
	bhs _08001EA0
	movs r2, #4
	cmp r3, r2
	bhs _08001EA8
	b _08001EA4
_08001EA0:
	cmp r3, r2
	blo _08001EA8
_08001EA4:
	movs r3, #0x3d
	strb r2, [r1, r3]
_08001EA8:
	pop {r1}
	movs r2, #0x80
	strb r2, [r1, #6]
	movs r3, #0x27
	strb r2, [r1, r3]
	ldrb r2, [r1, #0xb]
	movs r3, #0x80
	orrs r2, r3
	strb r2, [r1, #0xb]
	eors r2, r2
	pop {pc}
	.align 2, 0

