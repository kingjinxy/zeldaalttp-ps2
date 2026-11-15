	THUMB_FUNC_START sub_080DC058
sub_080DC058: @ 0x080DC058
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080DC08C  @ =gRam
	ldr r1, _080DC090  @ =0x0000096C
	add r2, r0, r1
	mov r1, #2
	strh r1, [r2]
	ldr r1, _080DC094  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080DC098  @ =gUnknown_08175F2C
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC08C:
	.4byte gRam
_080DC090:
	.4byte 0x0000096C
_080DC094:
	.4byte 0x00000F92
_080DC098:
	.4byte gUnknown_08175F2C
	THUMB_FUNC_END sub_080DC058

