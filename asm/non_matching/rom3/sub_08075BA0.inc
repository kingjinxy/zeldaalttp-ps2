	THUMB_FUNC_START sub_08075BA0
sub_08075BA0: @ 0x08075BA0
	push {r4,r5,lr}
	mov r0, #118
	mov r1, #0
	bl sub_0812A324
	ldr r4, _08075BD8  @ =gRam
	ldr r0, _08075BDC  @ =0x00000986
	add r1, r4, r0
	mov r5, #0
	mov r0, #1
	strb r0, [r1]
	ldr r0, _08075BE0  @ =0x00000189
	bl sub_080AF4FC
	mov r0, #0
	bl sub_08129EAC
	ldr r0, _08075BE4  @ =0x000009AD
	add r1, r4, r0
	mov r0, #11
	strb r0, [r1]
	ldr r0, _08075BE8  @ =0x000009E8
	add r4, r4, r0
	strh r5, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075BD8:
	.4byte gRam
_08075BDC:
	.4byte 0x00000986
_08075BE0:
	.4byte 0x00000189
_08075BE4:
	.4byte 0x000009AD
_08075BE8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08075BA0

