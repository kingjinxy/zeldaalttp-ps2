	THUMB_FUNC_START sub_0809E2FC
sub_0809E2FC: @ 0x0809E2FC
	push {r4,lr}
	ldr r0, _0809E33C  @ =gRam
	ldr r2, _0809E340  @ =0x000016C4
	add r1, r0, r2
	ldrh r2, [r1]
	ldr r3, _0809E344  @ =0x00001608
	add r1, r0, r3
	mov r3, #0
	strh r2, [r1]
	mov r4, #182
	lsl r4, r4, #5
	add r1, r0, r4
	ldrh r2, [r1]
	sub r4, r4, #180
	add r1, r0, r4
	strh r2, [r1]
	ldr r2, _0809E348  @ =0x00001605
	add r1, r0, r2
	strb r3, [r1]
	ldr r3, _0809E34C  @ =0x00001770
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809E330
	bl sub_0809DA4C
_0809E330:
	bl sub_0809D9D8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E33C:
	.4byte gRam
_0809E340:
	.4byte 0x000016C4
_0809E344:
	.4byte 0x00001608
_0809E348:
	.4byte 0x00001605
_0809E34C:
	.4byte 0x00001770
	THUMB_FUNC_END sub_0809E2FC

