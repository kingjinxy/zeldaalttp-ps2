	THUMB_FUNC_START sub_080C8F6C
sub_080C8F6C: @ 0x080C8F6C
	push {r4,lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	bl sub_080C8EEC
	ldr r1, _080C8FB4  @ =gRam
	ldr r2, _080C8FB8  @ =0x0000096C
	add r1, r1, r2
	strh r0, [r1]
	mov r4, #0
	ldrsh r3, [r1, r4]
	lsl r3, r3, #1
	ldr r1, _080C8FBC  @ =gUnknown_02018000
	add r0, r3, r1
	ldr r2, _080C8FC0  @ =gUnknown_02018002
	add r1, r3, r2
	ldr r4, _080C8FC4  @ =gUnknown_02018040
	add r2, r3, r4
	add r4, r4, #2
	add r3, r3, r4
	ldr r4, _080C8FC8  @ =gUnknown_08173088
	ldrh r0, [r0]
	ldrh r1, [r1]
	ldrh r2, [r2]
	ldrh r3, [r3]
	bl sub_080C8FCC
	lsl r0, r0, #16
	lsr r0, r0, #18
	add r0, r0, r4
	ldrb r0, [r0]
	pop {r4}
	pop {r1}
	bx r1
_080C8FB4:
	.4byte gRam
_080C8FB8:
	.4byte 0x0000096C
_080C8FBC:
	.4byte gUnknown_02018000
_080C8FC0:
	.4byte gUnknown_02018002
_080C8FC4:
	.4byte gUnknown_02018040
_080C8FC8:
	.4byte gUnknown_08173088
	THUMB_FUNC_END sub_080C8F6C

