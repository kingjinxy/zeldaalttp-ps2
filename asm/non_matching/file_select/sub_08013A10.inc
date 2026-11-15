	THUMB_FUNC_START sub_08013A10
sub_08013A10: @ 0x08013A10
	push {r4,lr}
	ldr r4, _08013A54  @ =gUnknown_0201EF30
	add r0, r4, #0
	add r0, r0, #192
	cmp r4, r0
	bcs _08013A4E
_08013A1C:
	ldrb r0, [r4, #2]
	cmp r0, #255
	bne _08013A46
	ldrh r0, [r4]
	ldr r2, _08013A58  @ =0x00000FFF
	add r1, r2, #0
	and r1, r1, r0
	mov r3, #192
	lsl r3, r3, #8
	add r2, r3, #0
	and r2, r2, r0
	mov r0, #155
	lsl r0, r0, #1
	bl sub_080144F0
	ldrh r1, [r4]
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4]
_08013A46:
	add r4, r4, #4
	ldr r0, _08013A5C  @ =gUnknown_0201EFF0
	cmp r4, r0
	bcc _08013A1C
_08013A4E:
	pop {r4}
	pop {r0}
	bx r0
_08013A54:
	.4byte gUnknown_0201EF30
_08013A58:
	.4byte 0x00000FFF
_08013A5C:
	.4byte gUnknown_0201EFF0
	THUMB_FUNC_END sub_08013A10

