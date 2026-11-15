	THUMB_FUNC_START sub_080B1B18
sub_080B1B18: @ 0x080B1B18
	push {r4,lr}
	cmp r0, #1
	bne _080B1B80
	ldr r3, _080B1B60  @ =gRam
	ldr r0, _080B1B64  @ =0x0000050C
	add r2, r3, r0
	ldrh r1, [r2]
	mov r4, #128
	lsl r4, r4, #6
	add r0, r4, #0
	mov r4, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _080B1B68  @ =0x04000040
	mov r0, #255
	strh r0, [r1]
	add r1, r1, #4
	ldr r2, _080B1B6C  @ =0x0000029E
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #4
	ldr r2, _080B1B70  @ =0x00001F1F
	add r0, r2, #0
	strh r0, [r1]
	ldr r0, _080B1B74  @ =0x0400004A
	strh r4, [r0]
	ldr r4, _080B1B78  @ =0x0000051E
	add r1, r3, r4
	mov r0, #255
	strh r0, [r1]
	ldr r0, _080B1B7C  @ =0x0000099A
	add r3, r3, r0
	mov r0, #5
	strb r0, [r3]
	b _080B1BAC
	.byte 0x00
	.byte 0x00
_080B1B60:
	.4byte gRam
_080B1B64:
	.4byte 0x0000050C
_080B1B68:
	.4byte 0x04000040
_080B1B6C:
	.4byte 0x0000029E
_080B1B70:
	.4byte 0x00001F1F
_080B1B74:
	.4byte 0x0400004A
_080B1B78:
	.4byte 0x0000051E
_080B1B7C:
	.4byte 0x0000099A
_080B1B80:
	ldr r3, _080B1BB4  @ =gRam
	ldr r4, _080B1BB8  @ =0x0000050C
	add r2, r3, r4
	ldrh r1, [r2]
	ldr r0, _080B1BBC  @ =0x0000DFFF
	and r0, r0, r1
	strh r0, [r2]
	ldr r0, _080B1BC0  @ =0x04000040
	mov r1, #255
	strh r1, [r0]
	add r0, r0, #4
	strh r1, [r0]
	ldr r1, _080B1BC4  @ =0x04000048
	ldr r2, _080B1BC8  @ =0x0000051A
	add r0, r3, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r4, r4, #16
	add r3, r3, r4
	ldrh r0, [r3]
	strh r0, [r1]
_080B1BAC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1BB4:
	.4byte gRam
_080B1BB8:
	.4byte 0x0000050C
_080B1BBC:
	.4byte 0x0000DFFF
_080B1BC0:
	.4byte 0x04000040
_080B1BC4:
	.4byte 0x04000048
_080B1BC8:
	.4byte 0x0000051A
	THUMB_FUNC_END sub_080B1B18

