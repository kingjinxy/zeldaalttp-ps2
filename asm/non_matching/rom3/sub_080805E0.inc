	THUMB_FUNC_START sub_080805E0
sub_080805E0: @ 0x080805E0
	push {r4,lr}
	ldr r0, _08080630  @ =0x00002020
	ldr r4, _08080634  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r4, r4, r1
	mov r1, #0
	ldrsh r2, [r4, r1]
	mov r1, #0
	bl sub_0807C970
	ldr r0, _08080638  @ =0x00002121
	mov r1, #0
	ldrsh r2, [r4, r1]
	add r2, r2, #4
	mov r1, #4
	bl sub_0807C970
	ldr r0, _0808063C  @ =0x00002222
	mov r1, #0
	ldrsh r2, [r4, r1]
	mov r1, #128
	lsl r1, r1, #1
	add r2, r2, r1
	mov r1, #8
	bl sub_0807C970
	ldr r0, _08080640  @ =0x00002323
	mov r1, #0
	ldrsh r2, [r4, r1]
	mov r1, #130
	lsl r1, r1, #1
	add r2, r2, r1
	mov r1, #12
	bl sub_0807C970
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08080630:
	.4byte 0x00002020
_08080634:
	.4byte gRam
_08080638:
	.4byte 0x00002121
_0808063C:
	.4byte 0x00002222
_08080640:
	.4byte 0x00002323
	THUMB_FUNC_END sub_080805E0

