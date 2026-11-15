	THUMB_FUNC_START sub_08074518
sub_08074518: @ 0x08074518
	push {lr}
	ldr r2, _0807454C  @ =gRam
	ldr r1, _08074550  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08074534
	ldr r3, _08074554  @ =0x00000D02
	add r1, r2, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08074534:
	ldr r1, _08074558  @ =gUnknown_0814D63C
	ldr r3, _0807455C  @ =0x000009E8
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807454C:
	.4byte gRam
_08074550:
	.4byte 0x00000CF8
_08074554:
	.4byte 0x00000D02
_08074558:
	.4byte gUnknown_0814D63C
_0807455C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08074518

