	THUMB_FUNC_START sub_08127BAC
sub_08127BAC: @ 0x08127BAC
	push {r4,lr}
	sub sp, sp, #4
	mov r1, sp
	add r1, r1, #2
	mov r0, sp
	bl sub_08129CB0
	mov r0, sp
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r3, _08127C34  @ =gUnknown_02000402
	add r0, r0, r3
	ldr r2, _08127C38  @ =gRam
	ldr r4, _08127C3C  @ =0x00001AC8
	add r1, r2, r4
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, sp
	mov r0, sp
	ldrh r0, [r0]
	add r0, r0, #2
	strh r0, [r1]
	ldr r1, _08127C40  @ =0x0000FFFE
	and r0, r0, r1
	add r0, r0, r3
	ldr r4, _08127C44  @ =gUnknown_08180B54
	ldrh r1, [r4]
	strh r1, [r0]
	mov r1, sp
	mov r0, sp
	ldrh r0, [r0]
	add r0, r0, #2
	strh r0, [r1]
	ldr r1, _08127C40  @ =0x0000FFFE
	and r0, r0, r1
	add r0, r0, r3
	ldrh r1, [r4, #2]
	strh r1, [r0]
	mov r1, sp
	mov r0, sp
	ldrh r0, [r0]
	add r0, r0, #2
	strh r0, [r1]
	ldr r1, _08127C40  @ =0x0000FFFE
	and r0, r0, r1
	add r0, r0, r3
	ldr r3, _08127C48  @ =0x0000FFFF
	add r1, r3, #0
	strh r1, [r0]
	ldr r4, _08127C4C  @ =0x00001AD0
	add r0, r2, r4
	mov r1, #0
	strb r1, [r0]
	ldr r3, _08127C50  @ =0x000009AD
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _08127C54  @ =0x00000A1A
	add r0, r2, r4
	ldrh r0, [r0]
	ldr r1, _08127C58  @ =0x000009AC
	add r2, r2, r1
	strb r0, [r2]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08127C34:
	.4byte gUnknown_02000402
_08127C38:
	.4byte gRam
_08127C3C:
	.4byte 0x00001AC8
_08127C40:
	.4byte 0x0000FFFE
_08127C44:
	.4byte gUnknown_08180B54
_08127C48:
	.4byte 0x0000FFFF
_08127C4C:
	.4byte 0x00001AD0
_08127C50:
	.4byte 0x000009AD
_08127C54:
	.4byte 0x00000A1A
_08127C58:
	.4byte 0x000009AC
	THUMB_FUNC_END sub_08127BAC

