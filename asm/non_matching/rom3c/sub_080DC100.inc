	THUMB_FUNC_START sub_080DC100
sub_080DC100: @ 0x080DC100
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080DC144
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DC134
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _080DC13C  @ =gUnknown_08175FDC
	ldr r0, _080DC140  @ =gFlippers
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
_080DC134:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080DC13C:
	.4byte gUnknown_08175FDC
_080DC140:
	.4byte gFlippers
	THUMB_FUNC_END sub_080DC100

