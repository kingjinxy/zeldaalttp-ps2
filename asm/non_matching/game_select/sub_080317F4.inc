	THUMB_FUNC_START sub_080317F4
sub_080317F4: @ 0x080317F4
	push {r4,lr}
	ldr r4, _0803180C  @ =gUnknown_03005050
	ldrb r0, [r4]
	add r1, r4, #0
	cmp r0, #3
	bgt _08031810
	cmp r0, #1
	bge _08031828
	cmp r0, #0
	beq _08031814
	b _08031862
	.byte 0x00
	.byte 0x00
_0803180C:
	.4byte gUnknown_03005050
_08031810:
	cmp r0, #4
	bne _08031862
_08031814:
	ldr r0, _08031824  @ =gUnknown_084279F0
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
	b _08031862
_08031824:
	.4byte gUnknown_084279F0
_08031828:
	bl sub_08037554
	cmp r0, #0
	beq _08031862
	bl sub_08037750
	ldr r1, _08031874  @ =gUnknown_084279F0
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldr r0, _08031878  @ =gUnknown_03006C70
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_08015D9C
	bl sub_08015C64
	bl sub_08008ED8
	bl sub_0802BFC4
	bl sub_08000BAC
	bl sub_08037574
_08031862:
	ldr r2, _0803187C  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _08031880  @ =0x0000F7FF
	and r0, r0, r1
	strh r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031874:
	.4byte gUnknown_084279F0
_08031878:
	.4byte gUnknown_03006C70
_0803187C:
	.4byte gUnknown_030004A0
_08031880:
	.4byte 0x0000F7FF
	THUMB_FUNC_END sub_080317F4

