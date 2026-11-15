	THUMB_FUNC_START sub_08099598
sub_08099598: @ 0x08099598
	push {r4-r7,lr}
	ldr r4, _08099644  @ =gRam
	ldr r1, _08099648  @ =0x000017F3
	add r0, r4, r1
	ldrb r2, [r0]
	ldr r3, _0809964C  @ =0x000016CF
	add r6, r4, r3
	add r1, r1, #1
	add r0, r4, r1
	ldrb r1, [r0]
	add r3, r3, #125
	add r0, r4, r3
	mov r7, #0
	strh r1, [r0]
	ldr r1, _08099650  @ =0x000017F6
	add r0, r4, r1
	ldrh r0, [r0]
	sub r3, r3, #132
	add r5, r4, r3
	strb r0, [r5]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	sub r2, r2, #2
	strb r2, [r6]
	bl sub_080978AC
	ldrb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	blt _080995DC
	b _08099748
_080995DC:
	lsr r0, r0, #24
	cmp r0, #159
	bhi _080995E6
	mov r0, #160
	strb r0, [r6]
_080995E6:
	ldrb r0, [r5]
	cmp r0, #239
	bhi _080995EE
	b _08099748
_080995EE:
	strb r7, [r5]
	ldr r1, _08099654  @ =0x000016C9
	add r0, r4, r1
	strb r7, [r0]
	ldr r2, _08099658  @ =0x00001718
	add r5, r4, r2
	ldrb r0, [r5]
	cmp r0, #12
	beq _08099604
	cmp r0, #14
	bne _08099680
_08099604:
	mov r0, #0
	bl sub_0809EEB4
	ldr r3, _0809965C  @ =0x000017D0
	add r0, r4, r3
	ldrh r1, [r0]
	mov r3, #1
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809966C
	ldr r1, _08099660  @ =0x00001714
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08099680
	ldr r2, _08099664  @ =0x00001717
	add r1, r4, r2
	mov r0, #9
	strb r0, [r1]
	ldr r1, _08099668  @ =0x00001715
	add r0, r4, r1
	strb r7, [r0]
	sub r2, r2, #1
	add r0, r4, r2
	strb r3, [r0]
	strb r3, [r5]
	b _080996A0
	.byte 0x00
	.byte 0x00
_08099644:
	.4byte gRam
_08099648:
	.4byte 0x000017F3
_0809964C:
	.4byte 0x000016CF
_08099650:
	.4byte 0x000017F6
_08099654:
	.4byte 0x000016C9
_08099658:
	.4byte 0x00001718
_0809965C:
	.4byte 0x000017D0
_08099660:
	.4byte 0x00001714
_08099664:
	.4byte 0x00001717
_08099668:
	.4byte 0x00001715
_0809966C:
	mov r0, #4
	strb r0, [r5]
	bl sub_080937AC
	bl sub_08092BF4
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
_08099680:
	bl sub_0809A190
	ldr r1, _080996B8  @ =gRam
	ldr r3, _080996BC  @ =0x00001718
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #4
	beq _080996C8
	ldr r2, _080996C0  @ =0x000017D4
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080996A0
	mov r0, #13
	bl sub_0809E43C
_080996A0:
	ldr r0, _080996B8  @ =gRam
	ldr r3, _080996BC  @ =0x00001718
	add r1, r0, r3
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #4
	beq _080996C8
	ldr r0, _080996C4  @ =0x0000180D
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	b _080996DC
_080996B8:
	.4byte gRam
_080996BC:
	.4byte 0x00001718
_080996C0:
	.4byte 0x000017D4
_080996C4:
	.4byte 0x0000180D
_080996C8:
	ldr r1, _08099724  @ =gRam
	ldr r2, _08099728  @ =0x0000176C
	add r0, r1, r2
	ldrb r3, [r0]
	add r4, r1, #0
	cmp r3, #0
	bne _080996DC
	ldr r1, _0809972C  @ =0x0000180D
	add r0, r4, r1
	strb r3, [r0]
_080996DC:
	ldr r2, _08099730  @ =0x00001738
	add r0, r4, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _08099734  @ =0x00001702
	add r0, r4, r3
	strb r2, [r0]
	ldr r0, _08099738  @ =0x000016CF
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	sub r3, r3, #58
	add r1, r4, r3
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r0, _0809973C  @ =0x000016C9
	add r1, r4, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r1, _08099740  @ =0x000016F8
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _08099744  @ =0x000009B2
	add r0, r4, r2
	mov r1, #0
	ldrsb r1, [r0, r1]
	cmp r1, #0
	bne _08099760
	mov r3, #161
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	b _08099760
	.byte 0x00
	.byte 0x00
_08099724:
	.4byte gRam
_08099728:
	.4byte 0x0000176C
_0809972C:
	.4byte 0x0000180D
_08099730:
	.4byte 0x00001738
_08099734:
	.4byte 0x00001702
_08099738:
	.4byte 0x000016CF
_0809973C:
	.4byte 0x000016C9
_08099740:
	.4byte 0x000016F8
_08099744:
	.4byte 0x000009B2
_08099748:
	ldr r2, _0809978C  @ =gRam
	ldr r1, _08099790  @ =0x000017F6
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _08099794  @ =0x000016C8
	add r0, r2, r3
	ldrb r0, [r0]
	sub r1, r1, r0
	add r3, r3, #14
	add r0, r2, r3
	strb r1, [r0]
	add r4, r2, #0
_08099760:
	ldr r1, _08099798  @ =0x000016CF
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _0809979C  @ =0x000017F3
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080997A0  @ =0x0000174C
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #132
	add r0, r4, r3
	ldrb r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809978C:
	.4byte gRam
_08099790:
	.4byte 0x000017F6
_08099794:
	.4byte 0x000016C8
_08099798:
	.4byte 0x000016CF
_0809979C:
	.4byte 0x000017F3
_080997A0:
	.4byte 0x0000174C
	THUMB_FUNC_END sub_08099598

