	THUMB_FUNC_START sub_080F5164
sub_080F5164: @ 0x080F5164
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F518C  @ =gRam
	ldr r2, _080F5190  @ =0x0000096C
	add r3, r1, r2
	mov r2, #4
	strh r2, [r3]
	ldr r2, _080F5194  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #5
	ldr r2, _080F5198  @ =gUnknown_081797D0
	add r1, r1, r2
	bl sub_080C94D0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F518C:
	.4byte gRam
_080F5190:
	.4byte 0x0000096C
_080F5194:
	.4byte 0x00000F92
_080F5198:
	.4byte gUnknown_081797D0
	THUMB_FUNC_END sub_080F5164

