	THUMB_FUNC_START sub_08031584
sub_08031584: @ 0x08031584
	push {r4-r6,lr}
	bl sub_08037554
	cmp r0, #0
	bne _08031590
	b _0803177E
_08031590:
	bl sub_08037750
	mov r0, #9
	bl sub_080378F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080315B8
	ldr r1, _080315D0  @ =gSubState
	ldrb r0, [r1]
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _080315B8
	mov r0, #4
	strb r0, [r1]
	ldr r1, _080315D4  @ =gUnknown_02016D60
	mov r0, #1
	strh r0, [r1, #4]
_080315B8:
	ldr r0, _080315D0  @ =gSubState
	ldrb r1, [r0]
	add r3, r0, #0
	cmp r1, #7
	bls _080315C4
	b _0803177A
_080315C4:
	lsl r0, r1, #2
	ldr r1, _080315D8  @ =0x080315DC
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_080315D0:
	.4byte gSubState
_080315D4:
	.4byte gUnknown_02016D60
_080315D8:
	.4byte _080315D8+0x4
	.4byte _080315FC
	.4byte _0803161C
	.4byte _0803169C
	.4byte _080316BC
	.4byte _080316EC
	.4byte _08031724
	.4byte _08031744
	.4byte _0803175C
_080315FC:
	mov r0, #62
	bl play_sound
	ldr r1, _08031614  @ =gUnknown_02016D60
	mov r0, #30
	strh r0, [r1, #4]
	ldr r1, _08031618  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _0803177A
	.byte 0x00
	.byte 0x00
_08031614:
	.4byte gUnknown_02016D60
_08031618:
	.4byte gSubState
_0803161C:
	ldr r1, _08031690  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0803162C
	b _0803177A
_0803162C:
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, #15
	bl play_sound
	mov r2, #0
	ldr r3, _08031694  @ =gUnknown_03006C80
	ldrb r0, [r3]
	cmp r2, r0
	bcs _08031666
	ldr r6, _08031698  @ =gUnknown_03006A30
	mov r5, #4
	mov r4, #255
_08031648:
	lsl r0, r2, #3
	add r0, r0, r2
	lsl r0, r0, #4
	add r0, r0, r6
	strb r5, [r0, #12]
	add r0, r0, #56
	ldrb r1, [r0]
	orr r1, r1, r4
	strb r1, [r0]
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldrb r0, [r3]
	cmp r2, r0
	bcc _08031648
_08031666:
	ldr r4, _08031690  @ =gUnknown_02016D60
	mov r0, #32
	strb r0, [r4, #9]
	mov r0, #49
	mov r1, #11
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #49
	mov r1, #11
	mov r2, #1
	bl sub_0804C8A8
	mov r0, #49
	mov r1, #11
	mov r2, #2
	bl sub_0804C8A8
	mov r0, #180
	strh r0, [r4, #4]
	b _0803177A
_08031690:
	.4byte gUnknown_02016D60
_08031694:
	.4byte gUnknown_03006C80
_08031698:
	.4byte gUnknown_03006A30
_0803169C:
	ldr r1, _080316B8  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803177A
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, #4
	strb r0, [r1, #10]
	b _0803177A
	.byte 0x00
	.byte 0x00
_080316B8:
	.4byte gUnknown_02016D60
_080316BC:
	ldr r1, _080316E8  @ =gUnknown_02016D60
	ldrb r0, [r1, #9]
	sub r0, r0, #1
	strb r0, [r1, #9]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #23
	bhi _080316D0
	mov r0, #8
	strb r0, [r1, #10]
_080316D0:
	ldrb r0, [r1, #9]
	cmp r0, #7
	bhi _0803177A
	mov r0, #12
	strb r0, [r1, #10]
	mov r0, #120
	strh r0, [r1, #4]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	b _0803177A
	.byte 0x00
	.byte 0x00
_080316E8:
	.4byte gUnknown_02016D60
_080316EC:
	ldr r4, _08031720  @ =gUnknown_02016D60
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803177A
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, #35
	bl load_palette_from_gfx_group
	ldrb r1, [r4, #2]
	add r1, r1, #5
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #49
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #2
	strb r0, [r4, #8]
	mov r0, #40
	strh r0, [r4, #4]
	b _0803177A
_08031720:
	.4byte gUnknown_02016D60
_08031724:
	ldr r1, _08031740  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803177A
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, #3
	strb r0, [r1, #8]
	b _0803177A
	.byte 0x00
	.byte 0x00
_08031740:
	.4byte gUnknown_02016D60
_08031744:
	ldr r1, _08031758  @ =gUnknown_02016D60
	ldrb r0, [r1, #8]
	cmp r0, #4
	bne _0803177A
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, #60
	strh r0, [r1, #4]
	b _0803177A
_08031758:
	.4byte gUnknown_02016D60
_0803175C:
	ldr r2, _08031784  @ =gUnknown_02016D60
	ldrh r0, [r2, #4]
	sub r0, r0, #1
	strh r0, [r2, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803177A
	ldr r1, _08031788  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	strb r0, [r3]
	mov r0, #5
	strb r0, [r2, #8]
_0803177A:
	bl sub_08037574
_0803177E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08031784:
	.4byte gUnknown_02016D60
_08031788:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08031584

