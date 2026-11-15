	THUMB_FUNC_START sub_08070D74
sub_08070D74: @ 0x08070D74
	push {r4,lr}
	ldr r4, _08070DB0  @ =gRam
	ldr r1, _08070DB4  @ =0x000016C4
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _08070DB8  @ =0x00001608
	add r0, r4, r2
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	bl sub_08096F30
	ldr r1, _08070DBC  @ =gUnknown_0814CB54
	ldr r0, _08070DC0  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070DB0:
	.4byte gRam
_08070DB4:
	.4byte 0x000016C4
_08070DB8:
	.4byte 0x00001608
_08070DBC:
	.4byte gUnknown_0814CB54
_08070DC0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08070D74

