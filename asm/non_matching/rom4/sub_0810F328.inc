	THUMB_FUNC_START sub_0810F328
sub_0810F328: @ 0x0810F328
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r5, _0810F380  @ =gRam
	ldr r1, _0810F384  @ =0x00000FB2
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #3
	eor r0, r0, r1
	mov r1, #0
	strb r0, [r2]
	ldr r2, _0810F388  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080F4888
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810F37A
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _0810F38C  @ =gUnknown_0817D09C
	ldr r2, _0810F390  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_0810F37A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810F380:
	.4byte gRam
_0810F384:
	.4byte 0x00000FB2
_0810F388:
	.4byte 0x00000F92
_0810F38C:
	.4byte gUnknown_0817D09C
_0810F390:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810F328

