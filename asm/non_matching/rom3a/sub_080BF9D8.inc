	THUMB_FUNC_START sub_080BF9D8
sub_080BF9D8: @ 0x080BF9D8
	push {r4,lr}
	lsl r0, r0, #24
	ldr r4, _080BFA44  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r2, r4, r1
	ldr r1, _080BFA48  @ =gUnknown_081719D8
	lsr r3, r0, #23
	add r1, r3, r1
	ldrh r1, [r1]
	sub r1, r1, #12
	ldrh r0, [r2]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _080BFA02
	neg r0, r0
	lsl r0, r0, #16
	lsr r1, r0, #16
_080BFA02:
	lsl r1, r1, #16
	asr r1, r1, #16
	ldr r0, _080BFA4C  @ =gUnknown_081719E8
	add r0, r3, r0
	ldrh r0, [r0]
	cmp r1, r0
	bge _080BFA5C
	ldr r0, _080BFA50  @ =0x000016C4
	add r2, r4, r0
	ldr r0, _080BFA54  @ =gUnknown_081719E0
	add r0, r3, r0
	ldrh r1, [r0]
	sub r1, r1, #8
	ldrh r0, [r2]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _080BFA30
	neg r0, r0
	lsl r0, r0, #16
	lsr r1, r0, #16
_080BFA30:
	lsl r1, r1, #16
	asr r1, r1, #16
	ldr r0, _080BFA58  @ =gUnknown_081719F0
	add r0, r3, r0
	ldrh r0, [r0]
	cmp r1, r0
	bge _080BFA5C
	mov r0, #1
	b _080BFA5E
	.byte 0x00
	.byte 0x00
_080BFA44:
	.4byte gRam
_080BFA48:
	.4byte gUnknown_081719D8
_080BFA4C:
	.4byte gUnknown_081719E8
_080BFA50:
	.4byte 0x000016C4
_080BFA54:
	.4byte gUnknown_081719E0
_080BFA58:
	.4byte gUnknown_081719F0
_080BFA5C:
	mov r0, #0
_080BFA5E:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080BF9D8

