	THUMB_FUNC_START sub_0807CF78
sub_0807CF78: @ 0x0807CF78
	push {r4,r5,lr}
	ldr r2, _0807CFCC  @ =gRam
	ldr r0, _0807CFD0  @ =0x00000AD2
	add r1, r2, r0
	ldrh r5, [r1]
	add r0, r5, #1
	strh r0, [r1]
	lsl r3, r5, #1
	ldr r1, _0807CFD4  @ =0x0000195C
	add r0, r2, r1
	add r0, r3, r0
	ldr r1, _0807CFD8  @ =0x00004040
	strh r1, [r0]
	ldr r4, _0807CFDC  @ =0x0000197C
	add r0, r2, r4
	add r0, r3, r0
	ldr r4, _0807CFE0  @ =0x000009F4
	add r1, r2, r4
	ldrh r1, [r1]
	strh r1, [r0]
	ldr r1, _0807CFE4  @ =0x000009F8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r2, #0
	cmp r1, r0
	bne _0807CFEC
	ldr r0, _0807CFE8  @ =0x0000199C
	add r2, r4, r0
	add r2, r3, r2
	mov r1, #151
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	mov r3, #128
	lsl r3, r3, #6
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	b _0807CFFC
	.byte 0x00
	.byte 0x00
_0807CFCC:
	.4byte gRam
_0807CFD0:
	.4byte 0x00000AD2
_0807CFD4:
	.4byte 0x0000195C
_0807CFD8:
	.4byte 0x00004040
_0807CFDC:
	.4byte 0x0000197C
_0807CFE0:
	.4byte 0x000009F4
_0807CFE4:
	.4byte 0x000009F8
_0807CFE8:
	.4byte 0x0000199C
_0807CFEC:
	ldr r1, _0807D02C  @ =0x0000199C
	add r0, r4, r1
	add r0, r3, r0
	mov r2, #151
	lsl r2, r2, #4
	add r1, r4, r2
	ldrh r1, [r1]
	strh r1, [r0]
_0807CFFC:
	lsl r2, r5, #1
	ldr r3, _0807D030  @ =0x000019BC
	add r0, r4, r3
	add r0, r2, r0
	ldr r1, _0807D034  @ =0x000061D8
	strh r1, [r0]
	ldr r1, _0807D038  @ =0x000019DC
	add r0, r4, r1
	add r0, r2, r0
	ldr r1, _0807D03C  @ =0x000061D9
	strh r1, [r0]
	add r3, r3, #64
	add r0, r4, r3
	add r0, r2, r0
	ldr r1, _0807D040  @ =0x000065D8
	strh r1, [r0]
	ldr r1, _0807D044  @ =0x00001A1C
	add r0, r4, r1
	add r2, r2, r0
	ldr r0, _0807D048  @ =0x000065D9
	strh r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_0807D02C:
	.4byte 0x0000199C
_0807D030:
	.4byte 0x000019BC
_0807D034:
	.4byte 0x000061D8
_0807D038:
	.4byte 0x000019DC
_0807D03C:
	.4byte 0x000061D9
_0807D040:
	.4byte 0x000065D8
_0807D044:
	.4byte 0x00001A1C
_0807D048:
	.4byte 0x000065D9
	THUMB_FUNC_END sub_0807CF78

