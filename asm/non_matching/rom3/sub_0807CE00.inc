	THUMB_FUNC_START sub_0807CE00
sub_0807CE00: @ 0x0807CE00
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r8, r1
	add r6, r2, #0
	add r5, r3, #0
	ldr r1, _0807CE58  @ =gUnknown_08164740
	mov r12, r1
	ldr r3, _0807CE5C  @ =gRam
	ldr r7, _0807CE60  @ =0x00000AD2
	add r2, r3, r7
	ldrh r4, [r2]
	add r1, r4, #1
	strh r1, [r2]
	lsl r2, r4, #1
	ldr r7, _0807CE64  @ =0x0000195C
	add r1, r3, r7
	add r1, r2, r1
	strh r0, [r1]
	ldr r1, _0807CE68  @ =0x0000197C
	add r0, r3, r1
	add r0, r2, r0
	ldr r7, _0807CE6C  @ =0x000009F4
	add r1, r3, r7
	ldrh r1, [r1]
	strh r1, [r0]
	ldr r1, _0807CE70  @ =0x000009F8
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #7
	cmp r1, r0
	bne _0807CE78
	ldr r7, _0807CE74  @ =0x0000199C
	add r0, r3, r7
	add r0, r2, r0
	mov r1, #128
	lsl r1, r1, #6
	add r2, r1, #0
	add r1, r6, #0
	orr r1, r1, r2
	strh r1, [r0]
	b _0807CE80
	.byte 0x00
	.byte 0x00
_0807CE58:
	.4byte gUnknown_08164740
_0807CE5C:
	.4byte gRam
_0807CE60:
	.4byte 0x00000AD2
_0807CE64:
	.4byte 0x0000195C
_0807CE68:
	.4byte 0x0000197C
_0807CE6C:
	.4byte 0x000009F4
_0807CE70:
	.4byte 0x000009F8
_0807CE74:
	.4byte 0x0000199C
_0807CE78:
	ldr r7, _0807CEC0  @ =0x0000199C
	add r0, r3, r7
	add r0, r2, r0
	strh r6, [r0]
_0807CE80:
	lsl r2, r4, #1
	ldr r1, _0807CEC4  @ =0x000019BC
	add r0, r3, r1
	add r0, r2, r0
	ldrh r1, [r5]
	strh r1, [r0]
	ldr r7, _0807CEC8  @ =0x000019DC
	add r0, r3, r7
	add r0, r2, r0
	ldrh r1, [r5, #2]
	strh r1, [r0]
	ldr r1, _0807CECC  @ =0x000019FC
	add r0, r3, r1
	add r0, r2, r0
	ldrh r1, [r5, #4]
	strh r1, [r0]
	add r7, r7, #64
	add r0, r3, r7
	add r2, r2, r0
	ldrh r0, [r5, #6]
	strh r0, [r2]
	mov r0, r8
	lsl r1, r0, #1
	add r1, r1, r12
	add r0, r6, #0
	bl sub_0807B97C
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0807CEC0:
	.4byte 0x0000199C
_0807CEC4:
	.4byte 0x000019BC
_0807CEC8:
	.4byte 0x000019DC
_0807CECC:
	.4byte 0x000019FC
	THUMB_FUNC_END sub_0807CE00

