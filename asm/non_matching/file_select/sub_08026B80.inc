	THUMB_FUNC_START sub_08026B80
sub_08026B80: @ 0x08026B80
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r1, _08026BC0  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r5, #104]
	and r0, r0, r1
	cmp r0, r1
	bne _08026BBA
	ldr r0, _08026BC4  @ =0x80020000
	bl play_sound
	ldr r0, _08026BC8  @ =0x800D01A7
	bl play_sound
	ldrb r0, [r5, #22]
	cmp r0, #0
	beq _08026BB6
	ldr r4, _08026BCC  @ =0x000001A1
	add r0, r4, #0
	bl play_sound
	ldr r0, _08026BD0  @ =gUnknown_03006C80
	strh r4, [r0, #38]
_08026BB6:
	mov r0, #2
	strb r0, [r5, #20]
_08026BBA:
	pop {r4,r5}
	pop {r0}
	bx r0
_08026BC0:
	.4byte gUnknown_0201F000
_08026BC4:
	.4byte 0x80020000
_08026BC8:
	.4byte 0x800D01A7
_08026BCC:
	.4byte 0x000001A1
_08026BD0:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08026B80

