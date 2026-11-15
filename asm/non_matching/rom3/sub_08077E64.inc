	THUMB_FUNC_START sub_08077E64
sub_08077E64: @ 0x08077E64
	push {r4,lr}
	ldr r4, _08077EC0  @ =gRam
	ldr r2, _08077EC4  @ =0x00000CAB
	add r1, r4, r2
	mov r2, #0
	strb r0, [r1]
	mov r1, #202
	lsl r1, r1, #4
	add r0, r4, r1
	strh r2, [r0]
	bl sub_08130030
	bl sub_08133244
	bl sub_0813309C
	bl sub_081300EC
	bl sub_081330EC
	bl sub_08133148
	bl sub_081302F0
	ldr r2, _08077EC8  @ =0x0000165C
	add r0, r4, r2
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	mov r1, #1
	cmp r0, #0
	beq _08077EA6
	mov r1, #3
_08077EA6:
	ldr r2, _08077ECC  @ =0x00000CA4
	add r0, r4, r2
	strb r1, [r0]
	bl sub_08133034
	bl sub_08130384
	bl sub_081305E0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077EC0:
	.4byte gRam
_08077EC4:
	.4byte 0x00000CAB
_08077EC8:
	.4byte 0x0000165C
_08077ECC:
	.4byte 0x00000CA4
	THUMB_FUNC_END sub_08077E64

