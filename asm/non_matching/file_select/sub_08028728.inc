	THUMB_FUNC_START sub_08028728
sub_08028728: @ 0x08028728
	push {r4-r7,lr}
	add r4, r0, #0
	add r6, r1, #0
	ldrh r1, [r6]
	lsr r7, r1, #12
	cmp r7, #14
	bne _08028742
	ldr r0, _08028754  @ =0x00000FFF
	and r0, r0, r1
	lsl r0, r0, #1
	sub r6, r6, r0
	ldrh r0, [r6]
	lsr r7, r0, #12
_08028742:
	add r0, r7, #0
	sub r0, r0, #10
	cmp r0, #5
	bhi _08028774
	lsl r0, r0, #2
	ldr r1, _08028758  @ =0x0802875C
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08028754:
	.4byte 0x00000FFF
_08028758:
	.4byte 0x0802875C
	.4byte _080287C8
	.4byte _080287E0
	.4byte _080287EA
	.4byte _08028814
	.4byte _08028774
	.4byte _08028834
_08028774:
	mov r0, #10
	bl sub_08012468
	add r5, r0, #0
	cmp r5, #0
	beq _0802883C
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803D3D0
	ldrh r0, [r6]
	mov r1, #63
	and r1, r1, r0
	lsl r1, r1, #4
	ldr r2, _080287C4  @ =gUnknown_0201EFF8
	add r3, r4, #0
	add r3, r3, #82
	ldrb r0, [r3]
	lsl r0, r0, #2
	add r0, r0, r2
	ldrh r0, [r0]
	add r0, r0, #8
	add r1, r1, r0
	strh r1, [r5, #50]
	ldrh r0, [r6]
	mov r1, #252
	lsl r1, r1, #4
	and r1, r1, r0
	lsr r1, r1, #2
	add r1, r1, #8
	ldrb r0, [r3]
	lsl r0, r0, #2
	add r2, r2, #2
	add r0, r0, r2
	ldrh r0, [r0]
	add r0, r0, r1
	strh r0, [r5, #54]
	strb r7, [r5, #10]
	b _0802883C
	.byte 0x00
	.byte 0x00
_080287C4:
	.4byte gUnknown_0201EFF8
_080287C8:
	ldrh r1, [r6]
	ldr r0, _080287DC  @ =0x00000FFF
	and r0, r0, r1
	lsl r1, r0, #4
	sub r1, r1, r0
	lsl r1, r1, #1
	add r0, r4, #0
	add r0, r0, #118
	strh r1, [r0]
	b _0802883C
_080287DC:
	.4byte 0x00000FFF
_080287E0:
	ldrb r0, [r6]
	bl sub_08013D20
	str r0, [r4, #112]
	b _08028826
_080287EA:
	ldr r1, _0802880C  @ =gUnknown_0201F000
	add r0, r4, #0
	add r0, r0, #82
	ldrb r2, [r0]
	lsl r2, r2, #2
	add r2, r2, r1
	ldr r3, _08028810  @ =gUnknown_08137B10
	ldrh r1, [r6]
	mov r0, #31
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r3
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
	b _0802883C
_0802880C:
	.4byte gUnknown_0201F000
_08028810:
	.4byte gUnknown_08137B10
_08028814:
	ldrh r1, [r6]
	ldr r0, _08028830  @ =0x00000FFF
	and r0, r0, r1
	lsl r1, r0, #4
	sub r1, r1, r0
	lsl r1, r1, #2
	add r0, r4, #0
	add r0, r0, #116
	strh r1, [r0]
_08028826:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	b _0802883C
	.byte 0x00
	.byte 0x00
_08028830:
	.4byte 0x00000FFF
_08028834:
	add r0, r4, #0
	bl DeleteThisEntity
	b _08028840
_0802883C:
	add r6, r6, #2
	add r0, r6, #0
_08028840:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08028728

	.byte 0x00
	.byte 0x00
