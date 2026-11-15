	THUMB_FUNC_START sub_08073B98
sub_08073B98: @ 0x08073B98
	push {r4,lr}
	bl sub_08130030
	bl sub_08133244
	bl sub_08133034
	bl sub_08130384
	bl sub_081305E0
	ldr r4, _08073BEC  @ =gRam
	ldr r1, _08073BF0  @ =0x000009C6
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _08073BF4  @ =gUnknown_02002DC0
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r2, _08073BF8  @ =gUnknown_0814C8E8
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_0813084C
	bl sub_08130978
	bl sub_08130AB4
	mov r0, #201
	lsl r0, r0, #4
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r1, _08073BFC  @ =0x000009E8
	add r4, r4, r1
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08073BEC:
	.4byte gRam
_08073BF0:
	.4byte 0x000009C6
_08073BF4:
	.4byte gUnknown_02002DC0
_08073BF8:
	.4byte gUnknown_0814C8E8
_08073BFC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08073B98

