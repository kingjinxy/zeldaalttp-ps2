	THUMB_FUNC_START sub_080DC2C0
sub_080DC2C0: @ 0x080DC2C0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080DC374
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DC2F0
	ldr r1, _080DC2F8  @ =gUnknown_08175FF0
	ldr r0, _080DC2FC  @ =gRam
	ldr r2, _080DC300  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080DC2F0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC2F8:
	.4byte gUnknown_08175FF0
_080DC2FC:
	.4byte gRam
_080DC300:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DC2C0

