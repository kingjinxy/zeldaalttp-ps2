	THUMB_FUNC_START sub_08072254
sub_08072254: @ 0x08072254
	push {r4-r7,lr}
	ldr r1, _0807227C  @ =gRam
	ldr r0, _08072280  @ =0x00000A34
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r2, _08072284  @ =0x00000ABE
	add r0, r1, r2
	ldrh r5, [r0]
	add r4, r1, #0
	cmp r5, #1
	bgt _0807228C
	ldr r2, _08072288  @ =gUnknown_0814D47A
	lsl r3, r5, #1
	add r0, r3, r2
	ldrh r1, [r0]
	mov r6, #193
	lsl r6, r6, #4
	b _08072296
_0807227C:
	.4byte gRam
_08072280:
	.4byte 0x00000A34
_08072284:
	.4byte 0x00000ABE
_08072288:
	.4byte gUnknown_0814D47A
_0807228C:
	ldr r2, _080722C8  @ =gUnknown_0814D47A
	lsl r3, r5, #1
	add r0, r3, r2
	ldrh r1, [r0]
	ldr r6, _080722CC  @ =0x00000C11
_08072296:
	add r0, r4, r6
	strb r1, [r0]
	add r7, r2, #0
	cmp r5, #1
	bgt _080722DC
	ldr r0, _080722D0  @ =0x00000958
	add r1, r4, r0
	add r0, r3, r7
	ldrh r0, [r0]
	ldrh r6, [r1]
	add r2, r0, r6
	strh r2, [r1]
	ldr r1, _080722D4  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #27
	beq _080722C2
	cmp r0, #91
	beq _080722C2
	ldr r6, _080722D8  @ =0x0000095E
	add r0, r4, r6
	strh r2, [r0]
_080722C2:
	ldr r1, _080722D0  @ =0x00000958
	b _08072300
	.byte 0x00
	.byte 0x00
_080722C8:
	.4byte gUnknown_0814D47A
_080722CC:
	.4byte 0x00000C11
_080722D0:
	.4byte 0x00000958
_080722D4:
	.4byte 0x000009C6
_080722D8:
	.4byte 0x0000095E
_080722DC:
	ldr r6, _08072324  @ =0x00000952
	add r1, r4, r6
	add r0, r3, r7
	ldrh r0, [r0]
	ldrh r6, [r1]
	add r2, r0, r6
	strh r2, [r1]
	ldr r1, _08072328  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #27
	beq _080722FE
	cmp r0, #91
	beq _080722FE
	ldr r6, _0807232C  @ =0x0000095C
	add r0, r4, r6
	strh r2, [r0]
_080722FE:
	ldr r1, _08072324  @ =0x00000952
_08072300:
	add r0, r4, r1
	mov r2, #0
	ldrsh r6, [r0, r2]
	ldr r1, _08072330  @ =0x00000A34
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r0, _08072334  @ =gUnknown_0814D5B2
	add r0, r3, r0
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r1, r0
	blt _08072346
	cmp r5, #1
	bgt _08072338
	mov r0, #182
	lsl r0, r0, #5
	b _0807233A
	.byte 0x00
	.byte 0x00
_08072324:
	.4byte 0x00000952
_08072328:
	.4byte 0x000009C6
_0807232C:
	.4byte 0x0000095C
_08072330:
	.4byte 0x00000A34
_08072334:
	.4byte gUnknown_0814D5B2
_08072338:
	ldr r0, _08072394  @ =0x000016C4
_0807233A:
	add r1, r4, r0
	add r0, r3, r7
	ldrh r0, [r0]
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
_08072346:
	ldr r1, _08072398  @ =0x00000B84
	add r0, r4, r1
	add r0, r3, r0
	ldrh r0, [r0]
	cmp r6, r0
	beq _08072354
	b _08072494
_08072354:
	ldr r2, _0807239C  @ =0x00000ABE
	add r0, r4, r2
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080723E0
	cmp r5, #1
	bgt _080723AC
	mov r5, #182
	lsl r5, r5, #5
	add r1, r4, r5
	ldrh r2, [r1]
	mov r0, #8
	neg r0, r0
	and r0, r0, r2
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r1, r0]
	ldr r0, _080723A0  @ =gUnknown_0814D48A
	add r0, r3, r0
	mov r2, #0
	ldrsh r0, [r0, r2]
	add r2, r1, r0
	add r1, r2, #0
	add r1, r1, #24
	ldr r5, _080723A4  @ =0x00000B8E
	add r0, r4, r5
	strh r1, [r0]
	add r1, r1, #2
	ldr r2, _080723A8  @ =0x00000B8C
	b _08072448
_08072394:
	.4byte 0x000016C4
_08072398:
	.4byte 0x00000B84
_0807239C:
	.4byte 0x00000ABE
_080723A0:
	.4byte gUnknown_0814D48A
_080723A4:
	.4byte 0x00000B8E
_080723A8:
	.4byte 0x00000B8C
_080723AC:
	ldr r5, _080723D4  @ =0x000016C4
	add r1, r4, r5
	ldrh r2, [r1]
	mov r0, #8
	neg r0, r0
	and r0, r0, r2
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r1, r0]
	ldr r0, _080723D8  @ =gUnknown_0814D48A
	add r0, r3, r0
	mov r2, #0
	ldrsh r0, [r0, r2]
	add r2, r1, r0
	ldr r5, _080723DC  @ =0x00000B92
	add r0, r4, r5
	strh r2, [r0]
	add r1, r2, #2
	b _08072444
	.byte 0x00
	.byte 0x00
_080723D4:
	.4byte 0x000016C4
_080723D8:
	.4byte gUnknown_0814D48A
_080723DC:
	.4byte 0x00000B92
_080723E0:
	cmp r5, #1
	bgt _0807241C
	mov r5, #182
	lsl r5, r5, #5
	add r1, r4, r5
	ldrh r2, [r1]
	mov r0, #8
	neg r0, r0
	and r0, r0, r2
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r1, r0]
	ldr r0, _08072410  @ =gUnknown_0814D48A
	add r0, r3, r0
	mov r2, #0
	ldrsh r0, [r0, r2]
	add r2, r1, r0
	ldr r5, _08072414  @ =0x00000B8E
	add r0, r4, r5
	strh r2, [r0]
	add r1, r2, #2
	ldr r2, _08072418  @ =0x00000B8C
	b _08072448
	.byte 0x00
	.byte 0x00
_08072410:
	.4byte gUnknown_0814D48A
_08072414:
	.4byte 0x00000B8E
_08072418:
	.4byte 0x00000B8C
_0807241C:
	ldr r5, _0807249C  @ =0x000016C4
	add r1, r4, r5
	ldrh r2, [r1]
	mov r0, #8
	neg r0, r0
	and r0, r0, r2
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r1, r0]
	ldr r0, _080724A0  @ =gUnknown_0814D48A
	add r0, r3, r0
	mov r2, #0
	ldrsh r0, [r0, r2]
	add r2, r1, r0
	add r1, r2, #0
	add r1, r1, #24
	ldr r5, _080724A4  @ =0x00000B92
	add r0, r4, r5
	strh r1, [r0]
	add r1, r1, #2
_08072444:
	mov r2, #185
	lsl r2, r2, #4
_08072448:
	add r0, r4, r2
	strh r1, [r0]
	ldr r5, _080724A8  @ =0x00000C92
	add r0, r4, r5
	ldrh r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	ldr r1, _080724AC  @ =gUnknown_0814D2B2
	add r1, r3, r1
	ldr r3, _080724B0  @ =0x00000C86
	add r2, r4, r3
	mov r5, #0
	ldrsh r1, [r1, r5]
	ldrh r2, [r2]
	add r1, r1, r2
	asr r5, r1, #1
	add r1, r5, #0
	bl sub_080724C4
	ldr r0, _080724B4  @ =0x00000CB4
	add r1, r4, r0
	mov r2, #0
	mov r0, #1
	strb r0, [r1]
	ldr r3, _080724B8  @ =0x000009AD
	add r1, r4, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r5, _080724BC  @ =0x000009E8
	add r0, r4, r5
	strh r2, [r0]
	ldr r1, _080724C0  @ =0x00000A34
	add r0, r4, r1
	strh r2, [r0]
	bl sub_080CBA5C
_08072494:
	add r0, r6, #0
	pop {r4-r7}
	pop {r1}
	bx r1
_0807249C:
	.4byte 0x000016C4
_080724A0:
	.4byte gUnknown_0814D48A
_080724A4:
	.4byte 0x00000B92
_080724A8:
	.4byte 0x00000C92
_080724AC:
	.4byte gUnknown_0814D2B2
_080724B0:
	.4byte 0x00000C86
_080724B4:
	.4byte 0x00000CB4
_080724B8:
	.4byte 0x000009AD
_080724BC:
	.4byte 0x000009E8
_080724C0:
	.4byte 0x00000A34
	THUMB_FUNC_END sub_08072254

