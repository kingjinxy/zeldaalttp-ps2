	THUMB_FUNC_START sub_0800C8E4
sub_0800C8E4: @ 0x0800C8E4
	push {r4,r5,lr}
	ldr r0, _0800C930  @ =gUnknown_03000204
	ldrb r1, [r0]
	mov r0, #1
	eor r0, r0, r1
	lsl r0, r0, #7
	ldr r1, _0800C934  @ =gUnknown_03006630
	add r2, r0, r1
	ldr r1, _0800C938  @ =gUnknown_03005E08
	ldr r0, [r1]
	cmp r2, r0
	bcs _0800C916
	ldr r5, _0800C93C  @ =gUnknown_084273C8
	add r4, r1, #0
_0800C900:
	ldrb r1, [r2]
	lsl r1, r1, #2
	add r1, r1, r5
	add r0, r2, #1
	ldr r1, [r1]
	bl _call_via_r1
	add r2, r0, #0
	ldr r0, [r4]
	cmp r2, r0
	bcc _0800C900
_0800C916:
	ldr r2, _0800C938  @ =gUnknown_03005E08
	ldr r0, _0800C930  @ =gUnknown_03000204
	ldrb r1, [r0]
	mov r0, #1
	eor r0, r0, r1
	lsl r0, r0, #7
	ldr r1, _0800C934  @ =gUnknown_03006630
	add r0, r0, r1
	str r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800C930:
	.4byte gUnknown_03000204
_0800C934:
	.4byte gUnknown_03006630
_0800C938:
	.4byte gUnknown_03005E08
_0800C93C:
	.4byte gUnknown_084273C8
	THUMB_FUNC_END sub_0800C8E4

