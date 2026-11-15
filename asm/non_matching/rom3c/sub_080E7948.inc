	THUMB_FUNC_START sub_080E7948
sub_080E7948: @ 0x080E7948
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080E797C  @ =gRam
	ldr r1, _080E7980  @ =0x00001052
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsr r1, r1, #3
	mov r0, #3
	and r1, r1, r0
	lsl r1, r1, #5
	ldr r0, _080E7984  @ =gUnknown_08177814
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080CA5AC
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E797C:
	.4byte gRam
_080E7980:
	.4byte 0x00001052
_080E7984:
	.4byte gUnknown_08177814
	THUMB_FUNC_END sub_080E7948

