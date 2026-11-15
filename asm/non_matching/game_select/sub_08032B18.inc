	THUMB_FUNC_START sub_08032B18
sub_08032B18: @ 0x08032B18
	push {r4,lr}
	ldr r0, _08032B50  @ =gUnknown_03000520
	ldrb r3, [r0]
	cmp r3, #0
	bne _08032B72
	ldr r0, _08032B54  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08032B72
	ldr r0, _08032B58  @ =gUnknown_0202A7E0
	ldr r0, [r0, #12]
	add r0, r0, #42
	strb r3, [r0]
	ldr r1, _08032B5C  @ =gUnknown_03000450
	ldrh r2, [r1, #34]
	mov r4, #34
	ldrsh r0, [r1, r4]
	cmp r0, #122
	bgt _08032B64
	add r0, r2, #1
	strh r0, [r1, #34]
	ldr r1, _08032B60  @ =gUnknown_030004A0
	strh r0, [r1, #48]
	strh r0, [r1, #36]
	b _08032B72
	.byte 0x00
	.byte 0x00
_08032B50:
	.4byte gUnknown_03000520
_08032B54:
	.4byte gUnknown_03000948
_08032B58:
	.4byte gUnknown_0202A7E0
_08032B5C:
	.4byte gUnknown_03000450
_08032B60:
	.4byte gUnknown_030004A0
_08032B64:
	ldr r0, _08032B78  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	strb r3, [r0, #1]
	mov r1, #90
	strh r1, [r0, #4]
_08032B72:
	pop {r4}
	pop {r0}
	bx r0
_08032B78:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08032B18

