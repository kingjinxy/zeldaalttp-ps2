	THUMB_FUNC_START sub_08088A6C
sub_08088A6C: @ 0x08088A6C
	push {r4,lr}
	ldr r4, _08088AD0  @ =gRam
	ldr r0, _08088AD4  @ =0x00000BF6
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strh r0, [r1]
	ldr r3, _08088AD8  @ =0x00000BD4
	add r0, r4, r3
	mov r3, #0
	ldrsh r0, [r0, r3]
	ldrh r1, [r1]
	add r0, r0, r1
	cmp r0, #192
	ble _08088AC8
	ldr r1, _08088ADC  @ =0x00000B04
	add r0, r4, r1
	strh r2, [r0]
	ldr r3, _08088AE0  @ =0x000009AD
	add r1, r4, r3
	mov r0, #0
	strb r0, [r1]
	ldr r1, _08088AE4  @ =0x000009E8
	add r0, r4, r1
	strh r2, [r0]
	ldr r3, _08088AE8  @ =0x0000051A
	add r1, r4, r3
	mov r0, #63
	strh r0, [r1]
	ldr r1, _08088AEC  @ =0x0000051C
	add r0, r4, r1
	strh r2, [r0]
	bl sub_0808B130
	ldr r3, _08088AF0  @ =0x00000504
	add r1, r4, r3
	mov r0, #123
	bl sub_0812A324
	bl sub_080887CC
	ldr r0, _08088AF4  @ =0x00001812
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
_08088AC8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08088AD0:
	.4byte gRam
_08088AD4:
	.4byte 0x00000BF6
_08088AD8:
	.4byte 0x00000BD4
_08088ADC:
	.4byte 0x00000B04
_08088AE0:
	.4byte 0x000009AD
_08088AE4:
	.4byte 0x000009E8
_08088AE8:
	.4byte 0x0000051A
_08088AEC:
	.4byte 0x0000051C
_08088AF0:
	.4byte 0x00000504
_08088AF4:
	.4byte 0x00001812
	THUMB_FUNC_END sub_08088A6C

