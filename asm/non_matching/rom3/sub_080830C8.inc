	THUMB_FUNC_START sub_080830C8
sub_080830C8: @ 0x080830C8
	push {r4-r7,lr}
	add r7, r0, #0
	ldr r4, _080831B0  @ =gRam
	ldr r1, _080831B4  @ =gUnknown_0816784C
	ldr r2, _080831B8  @ =0x00000964
	add r0, r4, r2
	ldrh r0, [r0]
	lsl r5, r0, #16
	asr r0, r5, #17
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r3, r4, r1
	strh r0, [r3]
	lsl r2, r7, #1
	ldr r1, _080831BC  @ =0x000018F0
	add r0, r4, r1
	add r0, r2, r0
	ldrh r0, [r0]
	mov r1, #3
	and r1, r1, r0
	add r6, r4, #0
	cmp r1, #0
	beq _080830FE
	b _08083218
_080830FE:
	ldr r1, _080831C0  @ =0x000018D0
	add r0, r4, r1
	add r0, r2, r0
	ldrh r0, [r0]
	lsr r2, r0, #1
	ldr r1, _080831C4  @ =0x0000783F
	add r0, r1, #0
	and r2, r2, r0
	ldr r0, _080831C8  @ =gUnknown_0200CBA1
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831CC  @ =gUnknown_0200CBA2
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831D0  @ =gUnknown_0200CBE1
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831D4  @ =gUnknown_0200CBE2
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831D8  @ =gUnknown_0200CC21
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831DC  @ =gUnknown_0200CC22
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831E0  @ =gUnknown_0200CC61
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831E4  @ =gUnknown_0200CC62
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831E8  @ =gUnknown_0200CCA1
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831EC  @ =gUnknown_0200CCA2
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831F0  @ =gUnknown_0200CCE1
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831F4  @ =gUnknown_0200CCE2
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831F8  @ =gUnknown_0200CD21
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080831FC  @ =gUnknown_0200CD22
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08083200  @ =gUnknown_0200CD61
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08083204  @ =gUnknown_0200CD62
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08083208  @ =gUnknown_0200CDA1
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _0808320C  @ =gUnknown_0200CDA2
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08083210  @ =gUnknown_0200CDE1
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08083214  @ =gUnknown_0200CDE2
	add r1, r2, r0
	ldrb r0, [r3]
	b _080834E8
	.byte 0x00
	.byte 0x00
_080831B0:
	.4byte gRam
_080831B4:
	.4byte gUnknown_0816784C
_080831B8:
	.4byte 0x00000964
_080831BC:
	.4byte 0x000018F0
_080831C0:
	.4byte 0x000018D0
_080831C4:
	.4byte 0x0000783F
_080831C8:
	.4byte gUnknown_0200CBA1
_080831CC:
	.4byte gUnknown_0200CBA2
_080831D0:
	.4byte gUnknown_0200CBE1
_080831D4:
	.4byte gUnknown_0200CBE2
_080831D8:
	.4byte gUnknown_0200CC21
_080831DC:
	.4byte gUnknown_0200CC22
_080831E0:
	.4byte gUnknown_0200CC61
_080831E4:
	.4byte gUnknown_0200CC62
_080831E8:
	.4byte gUnknown_0200CCA1
_080831EC:
	.4byte gUnknown_0200CCA2
_080831F0:
	.4byte gUnknown_0200CCE1
_080831F4:
	.4byte gUnknown_0200CCE2
_080831F8:
	.4byte gUnknown_0200CD21
_080831FC:
	.4byte gUnknown_0200CD22
_08083200:
	.4byte gUnknown_0200CD61
_08083204:
	.4byte gUnknown_0200CD62
_08083208:
	.4byte gUnknown_0200CDA1
_0808320C:
	.4byte gUnknown_0200CDA2
_08083210:
	.4byte gUnknown_0200CDE1
_08083214:
	.4byte gUnknown_0200CDE2
_08083218:
	cmp r1, #1
	beq _0808321E
	b _08083348
_0808321E:
	asr r0, r5, #16
	cmp r0, #12
	beq _0808325C
	cmp r0, #16
	beq _0808325C
	cmp r0, #4
	beq _0808325C
	ldr r1, _080832F8  @ =0x000018D0
	add r0, r4, r1
	add r0, r2, r0
	ldr r2, _080832FC  @ =0x00001934
	add r1, r4, r2
	ldrh r3, [r0]
	ldrh r1, [r1]
	cmp r3, r1
	beq _0808325C
	ldr r1, _08083300  @ =0x00001936
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r3, r0
	beq _0808325C
	add r2, r2, #4
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r3, r0
	beq _0808325C
	add r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r3, r0
	bne _08083266
_0808325C:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldr r0, _08083304  @ =0x00008E8E
	strh r0, [r1]
_08083266:
	lsl r0, r7, #1
	ldr r2, _080832F8  @ =0x000018D0
	add r1, r6, r2
	add r0, r0, r1
	ldrh r1, [r0]
	lsr r1, r1, #1
	ldr r0, _08083308  @ =gUnknown_0200CBE1
	add r3, r1, r0
	mov r0, #150
	lsl r0, r0, #4
	add r2, r6, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _0808330C  @ =gUnknown_0200CBE2
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083310  @ =gUnknown_0200CC21
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083314  @ =gUnknown_0200CC22
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083318  @ =gUnknown_0200CC61
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _0808331C  @ =gUnknown_0200CC62
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083320  @ =gUnknown_0200CCA1
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083324  @ =gUnknown_0200CCA2
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083328  @ =gUnknown_0200CCE1
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _0808332C  @ =gUnknown_0200CCE2
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083330  @ =gUnknown_0200CD21
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083334  @ =gUnknown_0200CD22
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083338  @ =gUnknown_0200CD61
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _0808333C  @ =gUnknown_0200CD62
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083340  @ =gUnknown_0200CDA1
	add r3, r1, r0
	ldrb r0, [r2]
	strb r0, [r3]
	ldr r0, _08083344  @ =gUnknown_0200CDA2
	add r1, r1, r0
	ldrb r0, [r2]
	b _080834E8
_080832F8:
	.4byte 0x000018D0
_080832FC:
	.4byte 0x00001934
_08083300:
	.4byte 0x00001936
_08083304:
	.4byte 0x00008E8E
_08083308:
	.4byte gUnknown_0200CBE1
_0808330C:
	.4byte gUnknown_0200CBE2
_08083310:
	.4byte gUnknown_0200CC21
_08083314:
	.4byte gUnknown_0200CC22
_08083318:
	.4byte gUnknown_0200CC61
_0808331C:
	.4byte gUnknown_0200CC62
_08083320:
	.4byte gUnknown_0200CCA1
_08083324:
	.4byte gUnknown_0200CCA2
_08083328:
	.4byte gUnknown_0200CCE1
_0808332C:
	.4byte gUnknown_0200CCE2
_08083330:
	.4byte gUnknown_0200CD21
_08083334:
	.4byte gUnknown_0200CD22
_08083338:
	.4byte gUnknown_0200CD61
_0808333C:
	.4byte gUnknown_0200CD62
_08083340:
	.4byte gUnknown_0200CDA1
_08083344:
	.4byte gUnknown_0200CDA2
_08083348:
	cmp r1, #2
	bne _08083440
	ldr r1, _080833F8  @ =0x000018D0
	add r0, r4, r1
	add r0, r2, r0
	ldrh r0, [r0]
	lsr r2, r0, #1
	ldr r1, _080833FC  @ =0x0000FFE0
	add r0, r1, #0
	and r2, r2, r0
	ldr r0, _08083400  @ =gUnknown_0200CBE0
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083404  @ =gUnknown_0200CBE1
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083408  @ =gUnknown_0200CBE2
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0808340C  @ =gUnknown_0200CBE3
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083410  @ =gUnknown_0200CBE4
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083414  @ =gUnknown_0200CBE5
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083418  @ =gUnknown_0200CBE6
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0808341C  @ =gUnknown_0200CBE7
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083420  @ =gUnknown_0200CC20
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083424  @ =gUnknown_0200CC21
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083428  @ =gUnknown_0200CC22
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0808342C  @ =gUnknown_0200CC23
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083430  @ =gUnknown_0200CC24
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083434  @ =gUnknown_0200CC25
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08083438  @ =gUnknown_0200CC26
	add r1, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0808343C  @ =gUnknown_0200CC27
	add r1, r2, r0
	b _080834E4
_080833F8:
	.4byte 0x000018D0
_080833FC:
	.4byte 0x0000FFE0
_08083400:
	.4byte gUnknown_0200CBE0
_08083404:
	.4byte gUnknown_0200CBE1
_08083408:
	.4byte gUnknown_0200CBE2
_0808340C:
	.4byte gUnknown_0200CBE3
_08083410:
	.4byte gUnknown_0200CBE4
_08083414:
	.4byte gUnknown_0200CBE5
_08083418:
	.4byte gUnknown_0200CBE6
_0808341C:
	.4byte gUnknown_0200CBE7
_08083420:
	.4byte gUnknown_0200CC20
_08083424:
	.4byte gUnknown_0200CC21
_08083428:
	.4byte gUnknown_0200CC22
_0808342C:
	.4byte gUnknown_0200CC23
_08083430:
	.4byte gUnknown_0200CC24
_08083434:
	.4byte gUnknown_0200CC25
_08083438:
	.4byte gUnknown_0200CC26
_0808343C:
	.4byte gUnknown_0200CC27
_08083440:
	ldr r1, _080834F0  @ =0x000018D0
	add r0, r4, r1
	add r0, r2, r0
	ldrh r1, [r0]
	lsr r1, r1, #1
	ldr r0, _080834F4  @ =gUnknown_0200CBE1
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _080834F8  @ =gUnknown_0200CBE2
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _080834FC  @ =gUnknown_0200CBE3
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083500  @ =gUnknown_0200CBE4
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083504  @ =gUnknown_0200CBE5
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083508  @ =gUnknown_0200CBE6
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _0808350C  @ =gUnknown_0200CBE7
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083510  @ =gUnknown_0200CBE8
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083514  @ =gUnknown_0200CC21
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083518  @ =gUnknown_0200CC22
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _0808351C  @ =gUnknown_0200CC23
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083520  @ =gUnknown_0200CC24
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083524  @ =gUnknown_0200CC25
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08083528  @ =gUnknown_0200CC26
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _0808352C  @ =gUnknown_0200CC27
	add r2, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r2]
	ldr r2, _08083530  @ =gUnknown_0200CC28
	add r1, r1, r2
_080834E4:
	ldrb r0, [r3]
	add r0, r0, #1
_080834E8:
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
_080834F0:
	.4byte 0x000018D0
_080834F4:
	.4byte gUnknown_0200CBE1
_080834F8:
	.4byte gUnknown_0200CBE2
_080834FC:
	.4byte gUnknown_0200CBE3
_08083500:
	.4byte gUnknown_0200CBE4
_08083504:
	.4byte gUnknown_0200CBE5
_08083508:
	.4byte gUnknown_0200CBE6
_0808350C:
	.4byte gUnknown_0200CBE7
_08083510:
	.4byte gUnknown_0200CBE8
_08083514:
	.4byte gUnknown_0200CC21
_08083518:
	.4byte gUnknown_0200CC22
_0808351C:
	.4byte gUnknown_0200CC23
_08083520:
	.4byte gUnknown_0200CC24
_08083524:
	.4byte gUnknown_0200CC25
_08083528:
	.4byte gUnknown_0200CC26
_0808352C:
	.4byte gUnknown_0200CC27
_08083530:
	.4byte gUnknown_0200CC28
	THUMB_FUNC_END sub_080830C8

