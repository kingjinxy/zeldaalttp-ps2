	THUMB_FUNC_START sub_080DC280
sub_080DC280: @ 0x080DC280
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r3, r1, #0
	ldr r0, _080DC2B0  @ =gBugCatchingNet
	ldrb r0, [r0]
	ldr r2, _080DC2B4  @ =gRam
	cmp r0, #0
	beq _080DC29C
	ldr r4, _080DC2B8  @ =0x00000F52
	add r0, r2, r4
	add r0, r1, r0
	mov r1, #3
	strb r1, [r0]
_080DC29C:
	ldr r0, _080DC2BC  @ =0x00001172
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC2B0:
	.4byte gBugCatchingNet
_080DC2B4:
	.4byte gRam
_080DC2B8:
	.4byte 0x00000F52
_080DC2BC:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080DC280

