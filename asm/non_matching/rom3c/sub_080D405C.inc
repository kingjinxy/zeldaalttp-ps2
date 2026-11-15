	THUMB_FUNC_START sub_080D405C
sub_080D405C: @ 0x080D405C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080D42DC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D4090
	ldr r2, _080D4098  @ =gUnknown_08174EE4
	ldr r0, _080D409C  @ =gRam
	ldr r1, _080D40A0  @ =0x0000165C
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r0, r0, #6
	mov r1, #1
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D4090:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D4098:
	.4byte gUnknown_08174EE4
_080D409C:
	.4byte gRam
_080D40A0:
	.4byte 0x0000165C
	THUMB_FUNC_END sub_080D405C

