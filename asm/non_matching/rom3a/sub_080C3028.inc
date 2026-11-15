	THUMB_FUNC_START sub_080C3028
sub_080C3028: @ 0x080C3028
	push {r4,r5,lr}
	add r2, r0, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r4, _080C307C  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r3, _080C3080  @ =0x000016C1
	add r1, r4, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r1, r1, #8
	add r0, r0, r1
	ldr r5, _080C3084  @ =0x00001142
	add r1, r4, r5
	add r1, r2, r1
	ldrb r1, [r1]
	add r1, r1, #8
	add r0, r0, r1
	ldr r3, _080C3088  @ =0x00000ED2
	add r1, r4, r3
	add r1, r2, r1
	ldrb r3, [r1]
	ldr r5, _080C308C  @ =0x00000EF2
	add r1, r4, r5
	add r2, r2, r1
	ldrb r1, [r2]
	lsl r1, r1, #8
	add r3, r3, r1
	sub r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080C3090  @ =0x0000097C
	add r4, r4, r1
	strb r0, [r4]
	lsr r0, r0, #15
	pop {r4,r5}
	pop {r1}
	bx r1
_080C307C:
	.4byte gRam
_080C3080:
	.4byte 0x000016C1
_080C3084:
	.4byte 0x00001142
_080C3088:
	.4byte 0x00000ED2
_080C308C:
	.4byte 0x00000EF2
_080C3090:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080C3028

