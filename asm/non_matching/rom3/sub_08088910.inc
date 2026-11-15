	THUMB_FUNC_START sub_08088910
sub_08088910: @ 0x08088910
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _08088A3C  @ =gRam
	ldr r0, _08088A40  @ =0x00000B18
	add r6, r4, r0
	ldrh r2, [r6]
	add r2, r2, #1
	strh r2, [r6]
	lsl r5, r2, #16
	lsr r3, r5, #17
	ldr r1, _08088A44  @ =0x00000BF8
	add r0, r4, r1
	strh r3, [r0]
	sub r3, r3, #8
	mov r7, #150
	lsl r7, r7, #4
	add r0, r4, r7
	strh r3, [r0]
	sub r1, r1, #32
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r7, _08088A48  @ =0x00000BD4
	add r0, r4, r7
	strh r1, [r0]
	ldr r0, _08088A4C  @ =0x00000BDA
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add r0, r0, r3
	ldr r3, _08088A50  @ =0x00000BF6
	add r1, r4, r3
	strh r0, [r1]
	mov r0, #15
	and r2, r2, r0
	cmp r2, #0
	bne _08088A32
	lsr r0, r5, #16
	cmp r0, #64
	bne _0808896C
	ldr r7, _08088A54  @ =0x000009E8
	add r1, r4, r7
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0808896C:
	ldr r1, _08088A58  @ =gUnknown_0815357C
	ldrh r0, [r6]
	lsr r0, r0, #4
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r6, [r0]
	ldr r0, _08088A5C  @ =0x00000B1A
	add r2, r4, r0
	ldrh r1, [r2]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	mov r7, #0
	ldrsh r5, [r2, r7]
	ldr r0, _08088A60  @ =0x0000097C
	add r1, r4, r0
	mov r0, #10
	strh r0, [r1]
	ldr r7, _08088A64  @ =gUnknown_02018000
	mov r8, r1
_08088998:
	add r0, r5, #0
	bl sub_08080380
	asr r4, r0, #1
	lsl r0, r4, #1
	add r0, r0, r7
	ldrh r1, [r6]
	strh r1, [r0]
	add r0, r5, #0
	add r0, r0, #128
	bl sub_08080380
	asr r4, r0, #1
	lsl r0, r4, #1
	add r0, r0, r7
	ldrh r1, [r6, #2]
	strh r1, [r0]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r5, r1
	bl sub_08080380
	asr r4, r0, #1
	lsl r0, r4, #1
	add r0, r0, r7
	ldrh r1, [r6, #4]
	strh r1, [r0]
	mov r3, #192
	lsl r3, r3, #1
	add r0, r5, r3
	bl sub_08080380
	asr r4, r0, #1
	lsl r0, r4, #1
	add r0, r0, r7
	ldrh r1, [r6, #6]
	strh r1, [r0]
	add r6, r6, #8
	add r5, r5, #2
	mov r1, r8
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08088998
	ldr r0, _08088A3C  @ =gRam
	ldr r3, _08088A60  @ =0x0000097C
	add r2, r0, r3
	mov r1, #3
	strh r1, [r2]
	mov r7, #151
	lsl r7, r7, #4
	add r6, r0, r7
	add r5, r2, #0
	ldr r1, _08088A68  @ =0x00000974
	add r1, r1, r0
	mov r8, r1
	sub r3, r3, #16
	add r7, r0, r3
_08088A10:
	mov r0, #0
	ldrsh r4, [r6, r0]
	mov r0, #4
	mov r1, r8
	strh r0, [r1]
	mov r0, #1
	strh r0, [r7]
	bl sub_08086E58
	add r0, r4, #6
	strh r0, [r6]
	ldrh r0, [r5]
	sub r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08088A10
_08088A32:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08088A3C:
	.4byte gRam
_08088A40:
	.4byte 0x00000B18
_08088A44:
	.4byte 0x00000BF8
_08088A48:
	.4byte 0x00000BD4
_08088A4C:
	.4byte 0x00000BDA
_08088A50:
	.4byte 0x00000BF6
_08088A54:
	.4byte 0x000009E8
_08088A58:
	.4byte gUnknown_0815357C
_08088A5C:
	.4byte 0x00000B1A
_08088A60:
	.4byte 0x0000097C
_08088A64:
	.4byte gUnknown_02018000
_08088A68:
	.4byte 0x00000974
	THUMB_FUNC_END sub_08088910

