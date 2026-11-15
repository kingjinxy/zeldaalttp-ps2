	THUMB_FUNC_START sub_08074650
sub_08074650: @ 0x08074650
	push {lr}
	ldr r2, _08074684  @ =gRam
	ldr r1, _08074688  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807466C
	ldr r3, _0807468C  @ =0x00000D02
	add r1, r2, r3
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
_0807466C:
	ldr r1, _08074690  @ =gUnknown_0814D654
	ldr r3, _08074694  @ =0x000009E8
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
_08074684:
	.4byte gRam
_08074688:
	.4byte 0x00000CF8
_0807468C:
	.4byte 0x00000D02
_08074690:
	.4byte gUnknown_0814D654
_08074694:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08074650

