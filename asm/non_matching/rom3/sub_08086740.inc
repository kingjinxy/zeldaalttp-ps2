	THUMB_FUNC_START sub_08086740
sub_08086740: @ 0x08086740
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _080868E4  @ =gUnknown_08153550
	ldr r4, _080868E8  @ =gRam
	ldr r2, _080868EC  @ =0x000016D5
	add r0, r4, r2
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	mov r5, #150
	lsl r5, r5, #4
	add r3, r4, r5
	mov r5, #0
	ldrsh r2, [r1, r5]
	ldrh r3, [r3]
	add r2, r2, r3
	mov r3, #252
	lsl r3, r3, #1
	add r1, r3, #0
	and r2, r2, r1
	ldr r1, _080868F0  @ =gUnknown_08153558
	add r0, r0, r1
	mov r5, #0
	ldrsh r0, [r0, r5]
	ldr r3, _080868F4  @ =0x00000964
	add r1, r4, r3
	mov r5, #0
	ldrsh r1, [r1, r5]
	add r0, r0, r1
	mov r1, #252
	lsl r1, r1, #1
	and r0, r0, r1
	asr r5, r0, #3
	lsl r2, r2, #3
	orr r5, r5, r2
	mov r6, #65
	ldr r2, _080868F8  @ =gUnknown_0200CBA0
	add r0, r5, r2
	ldrb r0, [r0]
	mov r1, #252
	mov r8, r1
	mov r3, r8
	and r3, r3, r0
	add r7, r4, #0
	cmp r3, #108
	beq _080867F8
	mov r1, #240
	and r3, r3, r1
	cmp r3, #240
	beq _080867F2
	add r5, r5, #1
	mov r6, #64
	add r0, r5, r2
	ldrb r0, [r0]
	mov r3, r8
	and r3, r3, r0
	cmp r3, #108
	beq _080867F8
	add r3, r1, #0
	and r3, r3, r0
	cmp r3, #240
	beq _080867F2
	add r5, r5, #63
	mov r6, #1
	add r0, r5, r2
	ldrb r0, [r0]
	mov r3, r8
	and r3, r3, r0
	cmp r3, #108
	beq _080867F8
	add r3, r1, #0
	and r3, r3, r0
	cmp r3, #240
	beq _080867F2
	add r5, r5, #1
	mov r6, #0
	add r0, r5, r2
	ldrb r0, [r0]
	mov r3, r8
	and r3, r3, r0
	cmp r3, #108
	beq _080867F8
	add r3, r1, #0
	and r3, r3, r0
	cmp r3, #240
	beq _080867F2
	b _08086978
_080867F2:
	cmp r3, #108
	beq _080867F8
	b _08086908
_080867F8:
	ldr r2, _080868FC  @ =0x0000097C
	add r1, r7, r2
	strh r6, [r1]
	cmp r6, #63
	ble _0808681A
	mov r0, #15
	and r6, r6, r0
	strh r6, [r1]
	sub r5, r5, #64
	ldr r3, _080868F8  @ =gUnknown_0200CBA0
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #252
	and r0, r0, r1
	cmp r0, #108
	beq _0808681A
	add r5, r5, #64
_0808681A:
	ldr r4, _080868FC  @ =0x0000097C
	add r0, r7, r4
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	beq _08086838
	sub r5, r5, #1
	ldr r2, _080868F8  @ =gUnknown_0200CBA0
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #252
	and r0, r0, r1
	cmp r0, #108
	beq _08086838
	add r5, r5, #1
_08086838:
	add r0, r5, #0
	sub r0, r0, #65
	lsl r0, r0, #1
	mov r3, #151
	lsl r3, r3, #4
	add r2, r7, r3
	strh r0, [r2]
	ldr r4, _080868F8  @ =gUnknown_0200CBA0
	add r0, r5, r4
	ldrb r3, [r0]
	mov r1, #2
	strb r1, [r0]
	add r4, r4, #1
	add r0, r5, r4
	strb r1, [r0]
	add r4, r4, #63
	add r0, r5, r4
	strb r1, [r0]
	add r4, r4, #1
	add r0, r5, r4
	strb r1, [r0]
	ldr r1, _08086900  @ =gUnknown_08153540
	mov r0, #3
	and r3, r3, r0
	lsl r0, r3, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r5, _080868FC  @ =0x0000097C
	add r1, r7, r5
	mov r0, #4
	strh r0, [r1]
	mov r0, #0
	ldrsh r6, [r2, r0]
	ldr r7, _08086904  @ =gUnknown_02018000
	mov r8, r1
_0808687E:
	add r0, r6, #0
	bl sub_08080380
	asr r5, r0, #1
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r0, r6, #0
	add r0, r0, #128
	bl sub_08080380
	asr r5, r0, #1
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r1, #128
	lsl r1, r1, #1
	add r0, r6, r1
	bl sub_08080380
	asr r5, r0, #1
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r2, #192
	lsl r2, r2, #1
	add r0, r6, r2
	bl sub_08080380
	asr r5, r0, #1
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r6, r6, #2
	mov r3, r8
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0808687E
	b _0808696C
	.byte 0x00
	.byte 0x00
_080868E4:
	.4byte gUnknown_08153550
_080868E8:
	.4byte gRam
_080868EC:
	.4byte 0x000016D5
_080868F0:
	.4byte gUnknown_08153558
_080868F4:
	.4byte 0x00000964
_080868F8:
	.4byte gUnknown_0200CBA0
_080868FC:
	.4byte 0x0000097C
_08086900:
	.4byte gUnknown_08153540
_08086904:
	.4byte gUnknown_02018000
_08086908:
	ldr r4, _08086984  @ =gUnknown_0200CBA0
	add r0, r5, r4
	ldrb r0, [r0]
	mov r6, #15
	and r6, r6, r0
	mov r1, #192
	lsl r1, r1, #4
	add r0, r7, r1
	strh r5, [r0]
	lsl r5, r6, #1
	ldr r2, _08086988  @ =0x000018B0
	add r0, r7, r2
	add r0, r5, r0
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	cmp r0, #50
	bne _08086978
	ldr r3, _0808698C  @ =0x00000504
	add r1, r7, r3
	mov r0, #123
	bl sub_0812A324
	ldr r4, _08086990  @ =0x00000BFE
	add r3, r7, r4
	ldr r0, _08086994  @ =gUnknown_081676B2
	add r0, r5, r0
	ldrh r1, [r3]
	ldrh r2, [r0]
	orr r1, r1, r2
	strh r1, [r3]
	ldr r5, _08086998  @ =0x00000AA6
	add r1, r7, r5
	ldrh r0, [r1]
	orr r0, r0, r2
	strh r0, [r1]
	ldr r0, _0808699C  @ =0x00000C04
	add r1, r7, r0
	mov r0, #0
	strh r0, [r1]
	add r0, r6, #0
	bl sub_08086140
	ldr r1, _080869A0  @ =0x00000B08
	add r0, r7, r1
	ldrh r0, [r0]
	bl sub_080835C8
	bl sub_08085978
_0808696C:
	bl sub_08089F74
	ldr r1, _080869A4  @ =gUnknown_03002734
	mov r0, #114
	bl sub_0812A324
_08086978:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08086984:
	.4byte gUnknown_0200CBA0
_08086988:
	.4byte 0x000018B0
_0808698C:
	.4byte 0x00000504
_08086990:
	.4byte 0x00000BFE
_08086994:
	.4byte gUnknown_081676B2
_08086998:
	.4byte 0x00000AA6
_0808699C:
	.4byte 0x00000C04
_080869A0:
	.4byte 0x00000B08
_080869A4:
	.4byte gUnknown_03002734
	THUMB_FUNC_END sub_08086740

