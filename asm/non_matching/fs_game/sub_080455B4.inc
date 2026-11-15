	THUMB_FUNC_START sub_080455B4
sub_080455B4: @ 0x080455B4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	bl sub_0803DF84
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_080660BC
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _080455F0
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	b _080456CE
_080455F0:
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	cmp r1, #0
	bne _0804562E
	ldr r0, _08045610  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r2, #127
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #6
	beq _08045614
	b _080456CE
	.byte 0x00
	.byte 0x00
_08045610:
	.4byte gUnknown_02000010
_08045614:
	bl sub_0800D644
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #21]
	b _080456CE
_0804562E:
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08045634:
	add r0, r7, #4
	ldr r1, _08045644  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08045648
	b _08045680
	.byte 0x00
	.byte 0x00
_08045644:
	.4byte gUnknown_03006C80
_08045648:
	ldr r0, _0804566C  @ =gUnknown_03000940
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08045670
	b _080456CE
	.byte 0x00
	.byte 0x00
_0804566C:
	.4byte gUnknown_03000940
_08045670:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08045634
_08045680:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r1, _080456D8  @ =0x000001F9
	add r0, r1, #0
	bl play_sound
	ldr r0, _080456DC  @ =gUnknown_03000520
	ldrb r1, [r0, #7]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #22
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #7]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	bl sub_0800C1EC
_080456CE:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080456D8:
	.4byte 0x000001F9
_080456DC:
	.4byte gUnknown_03000520
	THUMB_FUNC_END sub_080455B4

