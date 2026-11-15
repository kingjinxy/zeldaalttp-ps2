	THUMB_FUNC_START sub_080A46DC
sub_080A46DC: @ 0x080A46DC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080A479C  @ =gRam
	ldr r1, _080A47A0  @ =0x000017E4
	add r0, r5, r1
	mov r7, #0
	strb r6, [r0]
	cmp r6, #5
	beq _080A4706
	ldr r2, _080A47A4  @ =0x00001724
	add r0, r5, r2
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r4, _080A47A8  @ =0x00001723
	add r0, r5, r4
	ldrb r0, [r0]
	add r0, r0, r1
	add r2, r2, #202
	add r1, r5, r2
	strh r0, [r1]
_080A4706:
	ldr r4, _080A47AC  @ =0x00000965
	add r0, r5, r4
	strb r7, [r0]
	ldr r0, _080A47B0  @ =0x00000964
	add r3, r5, r0
	ldrb r1, [r3]
	ldr r2, _080A47B4  @ =0x00001736
	add r0, r5, r2
	strb r1, [r0]
	ldr r4, _080A47B8  @ =0x000016D5
	add r0, r5, r4
	ldrb r0, [r0]
	ldr r1, _080A47BC  @ =gUnknown_08169CDA
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r2, [r1]
	add r4, r4, #95
	add r1, r5, r4
	strb r2, [r1]
	ldr r1, _080A47C0  @ =gUnknown_0816B258
	add r0, r0, r1
	ldrh r0, [r0]
	ldr r1, _080A47C4  @ =0x00000968
	add r4, r5, r1
	strh r0, [r4]
	lsl r1, r6, #1
	add r1, r1, r0
	ldr r2, _080A47C8  @ =gUnknown_0816B118
	ldr r0, _080A47CC  @ =0x0000FFFE
	and r1, r1, r0
	add r1, r1, r2
	ldrh r0, [r3]
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	strh r0, [r3]
	ldr r1, _080A47D0  @ =gUnknown_0816AF12
	add r0, r0, r1
	ldrb r0, [r0]
	strh r0, [r4]
	ldr r2, _080A47D4  @ =0x000017D6
	add r1, r5, r2
	mov r0, #224
	lsl r0, r0, #4
	strh r0, [r1]
	ldr r4, _080A47D8  @ =0x00000CB2
	add r0, r5, r4
	ldrh r0, [r0]
	cmp r0, #0
	beq _080A4770
	strh r7, [r1]
_080A4770:
	ldr r4, _080A47DC  @ =gUnknown_03003E68
	bl sub_080A45FC
	strb r0, [r4]
	ldr r1, _080A47E0  @ =0x00001718
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #31
	beq _080A4792
	bl sub_080A47E4
	bl sub_080A4BD0
	bl sub_080A5038
	bl sub_080A5290
_080A4792:
	bl sub_080A5590
	pop {r4-r7}
	pop {r0}
	bx r0
_080A479C:
	.4byte gRam
_080A47A0:
	.4byte 0x000017E4
_080A47A4:
	.4byte 0x00001724
_080A47A8:
	.4byte 0x00001723
_080A47AC:
	.4byte 0x00000965
_080A47B0:
	.4byte 0x00000964
_080A47B4:
	.4byte 0x00001736
_080A47B8:
	.4byte 0x000016D5
_080A47BC:
	.4byte gUnknown_08169CDA
_080A47C0:
	.4byte gUnknown_0816B258
_080A47C4:
	.4byte 0x00000968
_080A47C8:
	.4byte gUnknown_0816B118
_080A47CC:
	.4byte 0x0000FFFE
_080A47D0:
	.4byte gUnknown_0816AF12
_080A47D4:
	.4byte 0x000017D6
_080A47D8:
	.4byte 0x00000CB2
_080A47DC:
	.4byte gUnknown_03003E68
_080A47E0:
	.4byte 0x00001718
	THUMB_FUNC_END sub_080A46DC

