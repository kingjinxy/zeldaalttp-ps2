	THUMB_FUNC_START sub_08010858
sub_08010858: @ 0x08010858
	push {lr}
	ldr r3, _080108B4  @ =gUnknown_02016D60
	ldrb r0, [r3, #27]
	cmp r0, #0
	bne _080108B0
	ldr r1, _080108B8  @ =gUnknown_030004A0
	ldrh r2, [r1]
	ldr r0, _080108BC  @ =0x0000F9FF
	and r0, r0, r2
	mov r2, #0
	strh r0, [r1]
	ldr r0, _080108C0  @ =0x00001D05
	strh r0, [r1, #20]
	mov r0, #4
	strh r0, [r1, #36]
	strh r0, [r1, #34]
	strh r0, [r1, #24]
	strh r0, [r1, #22]
	ldr r1, _080108C4  @ =gUnknown_0200B250
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #4]
	lsl r0, r0, #6
	add r0, r0, r1
	strb r2, [r0, #9]
	strb r2, [r0, #8]
	add r0, r3, #0
	add r0, r0, #32
	strb r2, [r0]
	add r0, r0, #1
	strb r2, [r0]
	add r0, r0, #1
	strb r2, [r0]
	strb r2, [r3, #3]
	strb r2, [r3, #2]
	mov r0, #3
	strb r0, [r3, #26]
	ldr r1, _080108C8  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #24
	bl load_gfx_group
_080108B0:
	pop {r0}
	bx r0
_080108B4:
	.4byte gUnknown_02016D60
_080108B8:
	.4byte gUnknown_030004A0
_080108BC:
	.4byte 0x0000F9FF
_080108C0:
	.4byte 0x00001D05
_080108C4:
	.4byte gUnknown_0200B250
_080108C8:
	.4byte gSubState
	THUMB_FUNC_END sub_08010858

