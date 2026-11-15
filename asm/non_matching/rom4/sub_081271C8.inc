	THUMB_FUNC_START sub_081271C8
sub_081271C8: @ 0x081271C8
	push {r4,r5,lr}
	ldr r4, _08127274  @ =gRam
	ldr r0, _08127278  @ =0x000009D4
	add r1, r4, r0
	mov r3, #0
	mov r0, #51
	strb r0, [r1]
	ldr r2, _0812727C  @ =0x0000051E
	add r1, r4, r2
	ldr r0, _08127280  @ =0x00003048
	strh r0, [r1]
	ldr r5, _08127284  @ =0x0000051A
	add r1, r4, r5
	mov r0, #63
	strh r0, [r1]
	ldr r1, _08127288  @ =0x00000998
	add r0, r4, r1
	mov r1, #15
	strb r1, [r0]
	ldr r2, _0812728C  @ =0x00000999
	add r0, r4, r2
	strb r1, [r0]
	sub r5, r5, #2
	add r2, r4, r5
	ldrh r1, [r2]
	ldr r0, _08127290  @ =0x0000FFF3
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _08127294  @ =0x0000050C
	add r2, r4, r0
	ldrh r1, [r2]
	ldr r0, _08127298  @ =0x0000F9FF
	and r0, r0, r1
	mov r5, #128
	lsl r5, r5, #4
	add r1, r5, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _0812729C  @ =0x00000CF8
	add r0, r4, r1
	strh r3, [r0]
	ldr r2, _081272A0  @ =0x00000CFA
	add r0, r4, r2
	strh r3, [r0]
	bl sub_081335FC
	bl sub_08133604
	ldr r2, _081272A4  @ =gUnknown_02000CE0
	ldr r1, _081272A8  @ =gUnknown_0818096C
	ldrh r0, [r1]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #2]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #4]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #6]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #8]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #10]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #12]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #14]
	strh r0, [r2]
	ldr r5, _081272AC  @ =0x0000099B
	add r4, r4, r5
	mov r0, #1
	strb r0, [r4]
	bl sub_080FD918
	bl sub_081272B0
	pop {r4,r5}
	pop {r0}
	bx r0
_08127274:
	.4byte gRam
_08127278:
	.4byte 0x000009D4
_0812727C:
	.4byte 0x0000051E
_08127280:
	.4byte 0x00003048
_08127284:
	.4byte 0x0000051A
_08127288:
	.4byte 0x00000998
_0812728C:
	.4byte 0x00000999
_08127290:
	.4byte 0x0000FFF3
_08127294:
	.4byte 0x0000050C
_08127298:
	.4byte 0x0000F9FF
_0812729C:
	.4byte 0x00000CF8
_081272A0:
	.4byte 0x00000CFA
_081272A4:
	.4byte gUnknown_02000CE0
_081272A8:
	.4byte gUnknown_0818096C
_081272AC:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_081271C8

