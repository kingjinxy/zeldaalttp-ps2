	THUMB_FUNC_START sub_08074740
sub_08074740: @ 0x08074740
	push {lr}
	ldr r2, _08074774  @ =gRam
	ldr r1, _08074778  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807475C
	ldr r3, _0807477C  @ =0x00000D02
	add r1, r2, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0807475C:
	ldr r1, _08074780  @ =gUnknown_0814D66C
	ldr r3, _08074784  @ =0x000009E8
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
_08074774:
	.4byte gRam
_08074778:
	.4byte 0x00000CF8
_0807477C:
	.4byte 0x00000D02
_08074780:
	.4byte gUnknown_0814D66C
_08074784:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08074740

