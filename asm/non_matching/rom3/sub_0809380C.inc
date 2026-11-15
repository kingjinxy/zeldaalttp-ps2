	THUMB_FUNC_START sub_0809380C
sub_0809380C: @ 0x0809380C
	push {r4-r6,lr}
	ldr r2, _08093894  @ =gRam
	ldr r1, _08093898  @ =0x000016F4
	add r0, r2, r1
	mov r3, #0
	mov r1, #15
	strb r1, [r0]
	ldr r4, _0809389C  @ =0x000016F5
	add r0, r2, r4
	strb r1, [r0]
	ldr r0, _080938A0  @ =0x0000172A
	add r4, r2, r0
	strb r3, [r4]
	ldr r1, _080938A4  @ =0x00001727
	add r5, r2, r1
	ldrb r1, [r5]
	mov r0, #12
	and r0, r0, r1
	add r6, r2, #0
	cmp r0, #0
	bne _08093838
	b _08093AE0
_08093838:
	mov r0, #1
	strb r0, [r4]
	mov r2, #0
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _08093848
	mov r2, #2
_08093848:
	lsr r1, r2, #1
	ldr r3, _080938A8  @ =0x00001726
	add r0, r6, r3
	strb r1, [r0]
	add r0, r2, #0
	bl sub_0809EC40
	ldr r4, _080938AC  @ =0x0000097C
	add r0, r6, r4
	ldrb r1, [r0]
	mov r0, #48
	and r0, r0, r1
	lsl r2, r0, #24
	cmp r2, #0
	beq _080938B4
	ldr r1, _080938B0  @ =0x00001721
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080938B4
	asr r0, r2, #28
	ldrb r1, [r5]
	and r0, r0, r1
	cmp r0, #0
	bne _080938B4
	mov r2, #2
	mov r3, #3
	and r3, r3, r1
	cmp r3, #0
	beq _080938B4
	and r3, r3, r2
	cmp r3, #0
	bne _0809395C
	mov r2, #3
	b _0809395C
	.byte 0x00
	.byte 0x00
_08093894:
	.4byte gRam
_08093898:
	.4byte 0x000016F4
_0809389C:
	.4byte 0x000016F5
_080938A0:
	.4byte 0x0000172A
_080938A4:
	.4byte 0x00001727
_080938A8:
	.4byte 0x00001726
_080938AC:
	.4byte 0x0000097C
_080938B0:
	.4byte 0x00001721
_080938B4:
	ldr r0, _080938D4  @ =gRam
	ldr r2, _080938D8  @ =0x00000B14
	add r1, r0, r2
	ldrh r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	beq _080938E0
	ldr r3, _080938DC  @ =0x0000097C
	add r0, r6, r3
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08093906
	b _08093968
	.byte 0x00
	.byte 0x00
_080938D4:
	.4byte gRam
_080938D8:
	.4byte 0x00000B14
_080938DC:
	.4byte 0x0000097C
_080938E0:
	ldr r4, _080939DC  @ =0x00001702
	add r0, r6, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080938F8
	ldr r1, _080939E0  @ =0x00000978
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0809394E
_080938F8:
	ldr r2, _080939E4  @ =0x0000097C
	add r0, r6, r2
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _08093968
_08093906:
	ldr r3, _080939E8  @ =0x0000172B
	add r1, r6, r3
	mov r0, #0
	strb r0, [r1]
	ldr r4, _080939EC  @ =0x000017DA
	add r0, r6, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809394E
	ldr r1, _080939F0  @ =0x00001774
	add r0, r6, r1
	ldrh r0, [r0]
	mov r2, #192
	lsl r2, r2, #2
	and r2, r2, r0
	cmp r2, #0
	bne _0809394E
	sub r3, r3, #4
	add r0, r6, r3
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _0809394E
	sub r4, r4, #16
	add r0, r6, r4
	strh r2, [r0]
	ldr r1, _080939F4  @ =0x000017BC
	add r0, r6, r1
	strh r2, [r0]
	add r3, r3, #145
	add r0, r6, r3
	strh r2, [r0]
	sub r4, r4, #8
	add r0, r6, r4
	strh r2, [r0]
_0809394E:
	ldr r1, _080939F8  @ =0x0000178B
	add r0, r6, r1
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080939FC  @ =0x00001726
	add r0, r6, r2
	ldrb r2, [r0]
_0809395C:
	ldr r0, _08093A00  @ =gUnknown_08167CFE
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _08093A04  @ =0x000016F4
	add r0, r6, r3
	strb r1, [r0]
_08093968:
	ldr r4, _08093A08  @ =0x00001727
	add r5, r6, r4
	ldrb r0, [r5]
	mov r3, #3
	and r3, r3, r0
	cmp r3, #0
	bne _08093978
	b _08093AE0
_08093978:
	ldr r0, _08093A0C  @ =0x0000172A
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r2, #4
	mov r4, #2
	and r3, r3, r4
	cmp r3, #0
	bne _0809398E
	mov r2, #6
_0809398E:
	lsr r1, r2, #1
	ldr r3, _080939FC  @ =0x00001726
	add r0, r6, r3
	strb r1, [r0]
	add r0, r2, #0
	bl sub_0809ECF8
	ldr r1, _080939E4  @ =0x0000097C
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #48
	and r0, r0, r1
	lsl r2, r0, #24
	cmp r2, #0
	beq _08093A14
	ldr r3, _08093A10  @ =0x00001721
	add r0, r6, r3
	ldrb r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08093A14
	asr r0, r2, #26
	ldrb r1, [r5]
	and r0, r0, r1
	cmp r0, #0
	bne _08093A14
	mov r2, #0
	mov r3, #12
	and r3, r3, r1
	cmp r3, #0
	beq _08093A14
	mov r0, #8
	and r3, r3, r0
	cmp r3, #0
	bne _08093ABC
	mov r2, #1
	b _08093ABC
	.byte 0x00
	.byte 0x00
_080939DC:
	.4byte 0x00001702
_080939E0:
	.4byte 0x00000978
_080939E4:
	.4byte 0x0000097C
_080939E8:
	.4byte 0x0000172B
_080939EC:
	.4byte 0x000017DA
_080939F0:
	.4byte 0x00001774
_080939F4:
	.4byte 0x000017BC
_080939F8:
	.4byte 0x0000178B
_080939FC:
	.4byte 0x00001726
_08093A00:
	.4byte gUnknown_08167CFE
_08093A04:
	.4byte 0x000016F4
_08093A08:
	.4byte 0x00001727
_08093A0C:
	.4byte 0x0000172A
_08093A10:
	.4byte 0x00001721
_08093A14:
	ldr r0, _08093A34  @ =gRam
	ldr r4, _08093A38  @ =0x00000B14
	add r1, r0, r4
	ldrh r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	beq _08093A40
	ldr r1, _08093A3C  @ =0x0000097C
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08093A66
	b _08093AC8
	.byte 0x00
	.byte 0x00
_08093A34:
	.4byte gRam
_08093A38:
	.4byte 0x00000B14
_08093A3C:
	.4byte 0x0000097C
_08093A40:
	ldr r2, _08093B28  @ =0x00001702
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08093A58
	ldr r3, _08093B2C  @ =0x00000978
	add r0, r6, r3
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08093AAE
_08093A58:
	ldr r4, _08093B30  @ =0x0000097C
	add r0, r6, r4
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _08093AC8
_08093A66:
	ldr r0, _08093B34  @ =0x0000172B
	add r1, r6, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _08093B38  @ =0x000017DA
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08093AAE
	ldr r2, _08093B3C  @ =0x00001774
	add r0, r6, r2
	ldrh r0, [r0]
	mov r2, #192
	lsl r2, r2, #2
	and r2, r2, r0
	cmp r2, #0
	bne _08093AAE
	ldr r3, _08093B40  @ =0x00001727
	add r0, r6, r3
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _08093AAE
	ldr r4, _08093B44  @ =0x000017CC
	add r0, r6, r4
	strh r2, [r0]
	ldr r1, _08093B48  @ =0x000017BE
	add r0, r6, r1
	strh r2, [r0]
	add r3, r3, #147
	add r0, r6, r3
	strh r2, [r0]
	sub r4, r4, #8
	add r0, r6, r4
	strh r2, [r0]
_08093AAE:
	ldr r1, _08093B4C  @ =0x0000178B
	add r0, r6, r1
	mov r1, #1
	strb r1, [r0]
	ldr r2, _08093B50  @ =0x00001726
	add r0, r6, r2
	ldrb r2, [r0]
_08093ABC:
	ldr r0, _08093B54  @ =gUnknown_08167CFE
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _08093B58  @ =0x000016F5
	add r0, r6, r3
	strb r1, [r0]
_08093AC8:
	ldr r4, _08093B40  @ =0x00001727
	add r2, r6, r4
	ldr r1, _08093B5C  @ =0x000016F4
	add r0, r6, r1
	ldrb r1, [r2]
	ldrb r0, [r0]
	and r0, r0, r1
	ldr r3, _08093B58  @ =0x000016F5
	add r1, r6, r3
	ldrb r1, [r1]
	and r0, r0, r1
	strb r0, [r2]
_08093AE0:
	ldr r0, _08093B40  @ =0x00001727
	add r4, r6, r0
	ldrb r1, [r4]
	mov r2, #15
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08093B00
	ldr r1, _08093B34  @ =0x0000172B
	add r0, r6, r1
	ldrb r0, [r0]
	add r3, r2, #0
	and r3, r3, r0
	cmp r3, #0
	beq _08093B00
	strb r3, [r4]
_08093B00:
	ldr r2, _08093B60  @ =0x0000172A
	add r4, r6, r2
	ldrb r3, [r4]
	mov r0, #0
	strb r0, [r4]
	cmp r3, #2
	bne _08093B22
	mov r2, #1
	ldr r3, _08093B64  @ =0x000016D5
	add r0, r6, r3
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08093B20
	mov r2, #2
_08093B20:
	strb r2, [r4]
_08093B22:
	pop {r4-r6}
	pop {r0}
	bx r0
_08093B28:
	.4byte 0x00001702
_08093B2C:
	.4byte 0x00000978
_08093B30:
	.4byte 0x0000097C
_08093B34:
	.4byte 0x0000172B
_08093B38:
	.4byte 0x000017DA
_08093B3C:
	.4byte 0x00001774
_08093B40:
	.4byte 0x00001727
_08093B44:
	.4byte 0x000017CC
_08093B48:
	.4byte 0x000017BE
_08093B4C:
	.4byte 0x0000178B
_08093B50:
	.4byte 0x00001726
_08093B54:
	.4byte gUnknown_08167CFE
_08093B58:
	.4byte 0x000016F5
_08093B5C:
	.4byte 0x000016F4
_08093B60:
	.4byte 0x0000172A
_08093B64:
	.4byte 0x000016D5
	THUMB_FUNC_END sub_0809380C

