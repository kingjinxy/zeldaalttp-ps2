	THUMB_FUNC_START sub_08031B4C
sub_08031B4C: @ 0x08031B4C
	push {r4,r5,lr}
	mov r2, #0
	ldr r0, _08031B74  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r2, r0
	bcs _08031B86
	ldr r4, _08031B78  @ =gUnknown_03000940
	mov r5, #128
	lsl r5, r5, #3
	add r3, r0, #0
_08031B60:
	lsl r0, r2, #1
	add r0, r0, r4
	ldrh r1, [r0]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08031B7C
	mov r0, #1
	b _08031B88
	.byte 0x00
	.byte 0x00
_08031B74:
	.4byte gUnknown_03006C80
_08031B78:
	.4byte gUnknown_03000940
_08031B7C:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r3
	bcc _08031B60
_08031B86:
	mov r0, #0
_08031B88:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08031B4C

	.byte 0x00
	.byte 0x00
