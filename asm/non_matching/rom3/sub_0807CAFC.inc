	THUMB_FUNC_START sub_0807CAFC
sub_0807CAFC: @ 0x0807CAFC
	push {r4,r5,lr}
	ldr r2, _0807CB50  @ =gRam
	ldr r0, _0807CB54  @ =0x00000AD2
	add r1, r2, r0
	ldrh r5, [r1]
	add r0, r5, #1
	strh r0, [r1]
	lsl r3, r5, #1
	ldr r1, _0807CB58  @ =0x0000195C
	add r0, r2, r1
	add r0, r3, r0
	ldr r1, _0807CB5C  @ =0x00001111
	strh r1, [r0]
	ldr r4, _0807CB60  @ =0x0000197C
	add r0, r2, r4
	add r0, r3, r0
	ldr r4, _0807CB64  @ =0x000009F4
	add r1, r2, r4
	ldrh r1, [r1]
	strh r1, [r0]
	ldr r1, _0807CB68  @ =0x000009F8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r2, #0
	cmp r1, r0
	bne _0807CB70
	ldr r0, _0807CB6C  @ =0x0000199C
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
	add r3, r0, #0
	b _0807CB82
_0807CB50:
	.4byte gRam
_0807CB54:
	.4byte 0x00000AD2
_0807CB58:
	.4byte 0x0000195C
_0807CB5C:
	.4byte 0x00001111
_0807CB60:
	.4byte 0x0000197C
_0807CB64:
	.4byte 0x000009F4
_0807CB68:
	.4byte 0x000009F8
_0807CB6C:
	.4byte 0x0000199C
_0807CB70:
	ldr r1, _0807CBC4  @ =0x0000199C
	add r0, r4, r1
	add r0, r3, r0
	mov r3, #151
	lsl r3, r3, #4
	add r2, r4, r3
	ldrh r1, [r2]
	strh r1, [r0]
	ldrh r3, [r2]
_0807CB82:
	lsl r2, r5, #1
	ldr r1, _0807CBC8  @ =0x000019BC
	add r0, r4, r1
	add r0, r2, r0
	ldr r1, _0807CBCC  @ =0x0000310E
	strh r1, [r0]
	ldr r1, _0807CBD0  @ =0x000019DC
	add r0, r4, r1
	add r0, r2, r0
	ldr r1, _0807CBD4  @ =0x0000311E
	strh r1, [r0]
	ldr r1, _0807CBD8  @ =0x000019FC
	add r0, r4, r1
	add r0, r2, r0
	ldr r1, _0807CBDC  @ =0x0000350E
	strh r1, [r0]
	ldr r1, _0807CBE0  @ =0x00001A1C
	add r0, r4, r1
	add r2, r2, r0
	ldr r0, _0807CBE4  @ =0x0000351E
	strh r0, [r2]
	ldr r1, _0807CBE8  @ =0x0000165C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0807CBBE
	ldr r1, _0807CBEC  @ =gUnknown_081653B2
	add r0, r3, #0
	bl sub_0807B97C
_0807CBBE:
	pop {r4,r5}
	pop {r0}
	bx r0
_0807CBC4:
	.4byte 0x0000199C
_0807CBC8:
	.4byte 0x000019BC
_0807CBCC:
	.4byte 0x0000310E
_0807CBD0:
	.4byte 0x000019DC
_0807CBD4:
	.4byte 0x0000311E
_0807CBD8:
	.4byte 0x000019FC
_0807CBDC:
	.4byte 0x0000350E
_0807CBE0:
	.4byte 0x00001A1C
_0807CBE4:
	.4byte 0x0000351E
_0807CBE8:
	.4byte 0x0000165C
_0807CBEC:
	.4byte gUnknown_081653B2
	THUMB_FUNC_END sub_0807CAFC

