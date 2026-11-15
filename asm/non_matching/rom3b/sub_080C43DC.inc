	THUMB_FUNC_START sub_080C43DC
sub_080C43DC: @ 0x080C43DC
	push {lr}
	ldr r2, _080C4430  @ =gRam
	ldr r0, _080C4434  @ =0x000015F0
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080C442C
	mov r0, #5
	strb r0, [r1]
	ldr r3, _080C4438  @ =0x000016C4
	add r1, r2, r3
	add r3, r3, #51
	add r0, r2, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r3, _080C443C  @ =0x000015F1
	add r1, r2, r3
	strb r0, [r1]
	mov r0, #182
	lsl r0, r0, #5
	add r1, r2, r0
	ldr r3, _080C4440  @ =0x000016F6
	add r0, r2, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r3, _080C4444  @ =0x000015F2
	add r1, r2, r3
	strb r0, [r1]
	mov r1, #161
	lsl r1, r1, #4
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _080C4448  @ =0x00000DA4
	add r0, r2, r3
	strb r1, [r0]
	mov r0, #113
	bl Sound_SetSfxPanWithPlayerCoords
_080C442C:
	pop {r0}
	bx r0
_080C4430:
	.4byte gRam
_080C4434:
	.4byte 0x000015F0
_080C4438:
	.4byte 0x000016C4
_080C443C:
	.4byte 0x000015F1
_080C4440:
	.4byte 0x000016F6
_080C4444:
	.4byte 0x000015F2
_080C4448:
	.4byte 0x00000DA4
	THUMB_FUNC_END sub_080C43DC

