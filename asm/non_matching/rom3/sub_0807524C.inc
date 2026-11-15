	THUMB_FUNC_START sub_0807524C
sub_0807524C: @ 0x0807524C
	push {r4,r5,lr}
	ldr r5, _08075260  @ =gRam
	ldr r0, _08075264  @ =0x00001AE2
	add r1, r5, r0
	ldrb r4, [r1]
	cmp r4, #0
	beq _08075268
	cmp r4, #1
	beq _08075294
	b _080752BC
_08075260:
	.4byte gRam
_08075264:
	.4byte 0x00001AE2
_08075268:
	strb r4, [r1]
	mov r0, #119
	mov r1, #0
	bl sub_0812A324
	ldr r0, _08075288  @ =0x00000189
	bl sub_080AF4FC
	ldr r0, _0807528C  @ =0x000009AD
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r1, _08075290  @ =0x000009E8
	add r0, r5, r1
	strh r4, [r0]
	b _080752BC
_08075288:
	.4byte 0x00000189
_0807528C:
	.4byte 0x000009AD
_08075290:
	.4byte 0x000009E8
_08075294:
	mov r0, #0
	strb r0, [r1]
	mov r0, #118
	mov r1, #0
	bl sub_0812A324
	ldr r0, _080752C4  @ =0x0000018D
	bl sub_080AF4FC
	ldr r0, _080752C8  @ =0x000009AD
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r0, _080752CC  @ =0x000009E8
	add r1, r5, r0
	mov r0, #4
	strh r0, [r1]
	mov r0, #1
	bl sub_08129EAC
_080752BC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080752C4:
	.4byte 0x0000018D
_080752C8:
	.4byte 0x000009AD
_080752CC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0807524C

