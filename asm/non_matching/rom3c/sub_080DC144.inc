	THUMB_FUNC_START sub_080DC144
sub_080DC144: @ 0x080DC144
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080DC16C  @ =gRam
	ldr r1, _080DC170  @ =0x0000096C
	add r0, r0, r1
	mov r1, #2
	strh r1, [r0]
	ldr r1, _080DC174  @ =gUnknown_08175FE0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC16C:
	.4byte gRam
_080DC170:
	.4byte 0x0000096C
_080DC174:
	.4byte gUnknown_08175FE0
	THUMB_FUNC_END sub_080DC144

